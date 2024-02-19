#include <iostream>
#include <list>
#include <sstream>

int main()
{
    std::stringstream lines;

    while (true)
    {
        std::string line;
        std::cout << "Enter line and i will ECHO :" << std::endl;
        std::getline(std::cin, line);
        if (line.empty())
        {
            break;
        }

        lines << "Craow " << line << std::endl;
    }

    std::cout << lines.str();
    return 0;
}
