#include <iostream>
#include <fstream>
#include <string>

void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2) 
{
    std::ifstream inputFile(filename);
    if (!inputFile) {
        std::cerr << "Failed to open input file." << std::endl;
        return;
    }

    std::ofstream outputFile(filename + ".replace");
    if (!outputFile) {
        std::cerr << "Failed to create output file." << std::endl;
        inputFile.close();
        return;
    }

    std::string line;
    while (getline(inputFile, line)) {
        size_t pos = line.find(s1);
        while (pos != std::string::npos) {
            line.replace(pos, s1.length(), s2);
            pos = line.find(s1, pos + s2.length());
        }
        outputFile << line << std::endl;
    }

    inputFile.close();
    outputFile.close();
    std::cout << "File replacement completed successfully." << std::endl;
}

int main(int argc, char* argv[]) 
{
    if (argc != 4) {
        std::cout << "Usage: ./program <filename> <s1> <s2>" << std::endl;
        return 0;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    replaceInFile(filename, s1, s2);

    return 0;
}
