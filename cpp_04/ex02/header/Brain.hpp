#pragma once 
#include <iostream>

class Brain
{
private:
    std::string Ideas[100];
public:
    Brain();
    ~Brain();
    Brain(const Brain &copy);
    Brain &operator=(const Brain &copy);

    void setIdea(int index, std::string idea);
    std::string getIdea(int index) const;
};
