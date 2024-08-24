#include "../header/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *numz;
    if (!N || name.empty())
        return (NULL);

    numz = new Zombie[N];
    for (int i = 0; i < N; i++)
        new (&numz[i]) Zombie(name);

    return (numz);
}