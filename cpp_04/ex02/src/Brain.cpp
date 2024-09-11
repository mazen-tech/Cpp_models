#include "../header/Brain.hpp"
#include <cstdlib>

Brain::Brain()
{
    std::cout << "Brain constructor called\n";

    std::string Ideas[100]=
    {
        "I'm Brain",
        "Rrrrrrrr...",
        "I'm Hungry",
        "Ughhhhhhh",
        "Cpp module 4",
        "XDDDDDDDDD",
        "Flesh",
        "I love food",
        "Zombies... attack"
    };


    for (int i = 0; i < 100; i++)
        this->Ideas[i] = Ideas[rand() % 10]; //rand() stands for random to generat random int from 0-9
}
Brain::~Brain()
{
    std::cout << "Brain distructor called\n";
}
Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy called\n";
    *this = copy;
}
Brain &Brain::operator=(const Brain &copy)
{
    std::cout << "Brain assignation operator called\n";
    for (int i = 0; i < 100; i++)
        this->Ideas[i] = copy.Ideas[i];
    return *this;
}

void Brain::setIdea(int index, std::string idea)
{
    this->Ideas[index] = idea;
}
std::string Brain::getIdea(int index) const
{
    return this->Ideas[index];
}