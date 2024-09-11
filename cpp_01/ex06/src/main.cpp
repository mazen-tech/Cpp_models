#include "../header/Harl.hpp"

int main(int ac, char **av)
{
    Harl test;
    if (ac != 2)
    {
        std::cout << "ERROR NEED TWO ARGUMENTS\n";
        return (1);
    }

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int choice;

    for (int i = 0; i < 4; i++)
        if (av[1] == levels[i])
            choice = i;

    switch (choice + 1)
    {
        case 1:
            test.complain("DEBUG");
            break;
        case 2:
            test.complain("INFO");
            break;
        case 3:
            test.complain("WARNING");
            break;
        case 4:
            test.complain("ERROR");
            break;
        default:
            std::cout << "HARL IS SLEEPING AT THE MOMENT :( \n";
    }
}