Description
This C++ program simulates the translation of logical addresses to physical addresses using a simulated page/frame table, typical in virtual memory management systems. It is designed to illustrate the mapping process from logical page numbers to physical frame numbers, demonstrating a fundamental operation within a computer's memory management unit.

Features
Page/Frame Table Initialization: Utilizes a hash map to represent the page/frame table, establishing predefined mappings from logical page numbers to physical frame numbers. This setup provides a simplified yet effective demonstration of how logical to physical address translation is performed.

Address Translation: Upon receiving a logical address, the program calculates the corresponding page number and offset. It then looks up the physical frame number in the page/frame table to determine the physical address. This process is a core part of memory management in computing systems, showcasing the steps involved in translating addresses.

User Interaction: The program is interactive, asking users to input the number of logical addresses they wish to translate. For each address, users are prompted to enter the logical address in hexadecimal format. The program then performs the translation and displays the physical address, enhancing understanding of the memory management process.

User Instructions
Compilation: First, compile the program using a C++ compiler by running a command similar to g++ -o addressTranslator addressTranslator.cpp in your terminal or command prompt, adjusting the command based on your compiler and file name as necessary.

Running the Program: Execute the compiled program, for example, by entering ./addressTranslator in the terminal. The program will then wait for user inputs.

Entering Logical Addresses: Follow the on-screen prompts to input the number of logical addresses you intend to translate. For each address, input the hexadecimal value as prompted, omitting the '0x' prefix. The program will output the corresponding physical address for each logical address entered.
