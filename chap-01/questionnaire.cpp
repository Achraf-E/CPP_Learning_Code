#include <iostream>
#include <sstream>
#include <string>
#include <vector>
int main(int argc, char const* argv[])
{
    bool a;
    std::cout << a << std::endl;
    std::string b;
    std::cout << b << std::endl;
    std::vector<char> c;
    c.push_back('A');
    for (auto character : c)
    {
        std::cout << character;
    }
    std::cout << std::endl;

    std::stringstream strings;
    strings << 3 << "petits" << true;
    std::cout << strings.str() << std::endl;

    std::string line;
    std::getline(std::cin, line);
    std::cout << line.substr(line.find_last_of(' ') + 1);

    return 0;
}
