#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char const *argv[])
{
    if (argc != 4)
        return 1;

    std::string fileName = argv[1];
    std::string search = argv[2];
    std::string replace = argv[3];

    std::ifstream MyReadFile(fileName);
    if (!MyReadFile)
    {
        std::cerr << "Cannot open this file. Please try again..." << std::endl;
        return 1;
    }

    std::string total;
    std::string content;

    while (std::getline(MyReadFile, content))
    {
        size_t pos = 0;
        while ((pos = content.find(search, pos)) != std::string::npos)
        {
            content.erase(pos, search.length());
            content.insert(pos, replace);
            pos += replace.length();
        }
        total += content + "\n";
    }

    MyReadFile.close();

    std::ofstream outFile(fileName + ".replace");
    if (!outFile)
    {
        std::cerr << "Error: Cannot create file " << fileName + ".replace" << "\n";
        return 1;
    }

    outFile << total;
    outFile.close();

    std::cout << "Replacement done. Output saved to " << fileName + ".replace" << std::endl;

    return 0;
}
