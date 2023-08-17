#include "WriteInFile.h"
#include <iostream>
#include <fstream>

void writeHelloWorldToFile(const char* filename) {
    std::ofstream outputFile(filename);
    if (outputFile.is_open()) {
        outputFile << "HelloWorld" << std::endl;
        outputFile.close();
        std::cout << "Successfully wrote 'HelloWorld' to " << filename << std::endl;
    } else {
        std::cerr << "Unable to open file: " << filename << std::endl;
    }
}

