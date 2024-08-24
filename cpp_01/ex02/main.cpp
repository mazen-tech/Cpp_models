#include <iostream>

#define GREEN "\033[0;32m"
#define RESET "\033[0m"

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str; // stringptr hold the address / *stringptr holds the value
    std::string &stringREF = str; // &stringref holds the address / stringref hold the value


    std::cout << GREEN << "[string] memory address" << RESET << &str << std::endl;
    std::cout << GREEN << "[stringPTR] memory address" << RESET << stringPTR << std::endl;
    std::cout << GREEN << "[stringREF] memory address" << RESET << &stringREF << std::endl;
    

    std::cout << GREEN << "[string] memory value" << RESET << str << std::endl;
    std::cout << GREEN << "[stringPTR] memory value" << RESET << *stringPTR << std::endl;
    std::cout << GREEN << "[stringREF] memory value" << RESET << stringREF << std::endl;
    return (0);
}