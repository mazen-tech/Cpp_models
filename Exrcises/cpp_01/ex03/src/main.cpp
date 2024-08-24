#
#include "../header/HumanA.hpp"
#include "../header/HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");

        HumanA mazen("mazen", club);
        mazen.attack();
        club.setTypew("some other type of club");
        mazen.attack();
    }
    {
        Weapon pistol = Weapon("crude spiked club");

        HumanB Alex("Jim");
        Alex.setWeapon(pistol);
        Alex.attack();
        pistol.setTypew("some other type of club");
        Alex.attack();
    }

    return 0;
}