#include "../header/Zombie.hpp"

int main(void)
{
    int nt = 5;

    Zombie *nzt = zombieHorde(nt, "FOO");

    for(int i = 0; i < nt; i++)
        nzt[i].announce();

    delete[] nzt;
    return (0);
}