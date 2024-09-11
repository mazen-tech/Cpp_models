#include "../header/Harl.hpp"

 Harl::Harl(void)
{
    std::cout << "Harl default constructor has been called \n";
}
Harl::~Harl()
{
    std::cout << "Harl default distructor has been called \n";
}

void Harl::debug(void)
{
    std::cout << GREEN << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-spicial-ketchup burger. I really do! \n" << RESET;
}
void Harl::info(void)
{
    std::cout << CYAN << "I cannot believe adding extra bacon costs more money. you didn't put enough bacon in my burger! if you did, I wouldn't be asking for more! \n" << RESET;
}
void Harl::warning(void)
{
    std::cout << YELLOW << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month \n" << RESET;
}
void Harl::error(void)
{
    std::cout << RED << "this is unacceptable! I want to speak to the manager now. \n" << RESET;
}

void Harl::complain( std::string level )
{
    void (Harl::*harl_level[4])();
    harl_level[0] = &Harl::debug;
    harl_level[1] = &Harl::info;
    harl_level[2] = &Harl::warning;
    harl_level[3] = &Harl::error;

    std::string levels[4];
    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";

    for(int i = 0; i < 4; i++)
    {
        if (level == levels[i])
            (this->*harl_level[i])();
    }
}
