
#include "WriteInFile.h"
#include "Print.h"
#include <iostream>
#include <string>
int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " -c (console) | -f (file)" << std::endl;
        return 1;
    }

    if (std::string(argv[1]) == "-c") {
        printHelloWorld();
    } else if (std::string(argv[1]) == "-f") {
        writeHelloWorldToFile("helloWorld.txt");
    } else {
        std::cerr << "Invalid argument: " << argv[1] << std::endl;
        return 1;
    }

    return 0;
}
