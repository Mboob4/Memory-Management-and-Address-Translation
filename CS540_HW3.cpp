#include <iostream>
#include <unordered_map>
#include <iomanip>

// Simulating a page/frame table using a hash map
// Maps logical page numbers to physical frame numbers
std::unordered_map<int, int> pageFrameTable;

// Function to add entries to the page/frame table 
void initializePageFrameTable() {
   
    pageFrameTable[0x0D] = 1; // Mapping logical page 0x0D to physical frame 1
    pageFrameTable[0x2B] = 2; // Mapping logical page 0x2B to physical frame 2
    pageFrameTable[0x15] = 3; // Mapping logical page 0x15 to physical frame 3
    pageFrameTable[0x16] = 4; // Mapping logical page 0x16 to physical frame 4
    pageFrameTable[0x17] = 5; // Mapping logical page 0x17 to physical frame 5
    pageFrameTable[0x18] = 6; // Mapping logical page 0x18 to physical frame 6
    pageFrameTable[0x19] = 7; // Mapping logical page 0x19 to physical frame 7
    pageFrameTable[0x1A] = 8; // Mapping logical page 0x1A to physical frame 8
    pageFrameTable[0x1B] = 9; // Mapping logical page 0x1B to physical frame 9
    pageFrameTable[0x1C] = 10; // Mapping logical page 0x1C to physical frame 10
    pageFrameTable[0x1D] = 11; // Mapping logical page 0x1D to physical frame 11
    pageFrameTable[0x1E] = 12; // Mapping logical page 0x1E to physical frame 12
    pageFrameTable[0x1F] = 13; // Mapping logical page 0x1F to physical frame 13
    pageFrameTable[0x20] = 14; // Mapping logical page 0x20 to physical frame 14
    pageFrameTable[0x21] = 15; // Mapping logical page 0x21 to physical frame 15
    pageFrameTable[0x22] = 16; // Mapping logical page 0x22 to physical frame 16
}

// Function to simulate translating logical to physical address
void translateAddress(unsigned int logicalAddress) {
    unsigned int pageNumber = (logicalAddress >> 8) & 0xFF; // Extracting page number
    unsigned int offset = logicalAddress & 0xFF; // Extracting offset

    std::cout << "Logical Address: 0x" << std::hex << std::uppercase << logicalAddress 
              << " => Page Number: 0x" << pageNumber 
              << ", Offset: 0x" << offset;

    if (pageFrameTable.find(pageNumber) != pageFrameTable.end()) {
        // If page is present, calculate physical address
        unsigned int frameNumber = pageFrameTable[pageNumber];
        unsigned int physicalAddress = (frameNumber << 8) | offset;
        std::cout << " - Physical Address: 0x" << std::hex << physicalAddress << std::endl;
    } 
}

int main() {
    // Initialize the page/frame table with some mappings
    initializePageFrameTable();

    int numAddresses;
    std::cout << " Enter the number of logical addresses to translate: ";
    std::cin >> numAddresses;

    for (int i = 0; i < numAddresses; ++i) {
        unsigned int address;
        std::cout << " Enter logical address #" << i + 1 << " in hexadecimal (without the '0x' prefix): ";
        std::cin >> std::hex >> address; 
        translateAddress(address);
    }

    return 0;
}