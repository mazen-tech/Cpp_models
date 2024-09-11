#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#define RESET   "\033[0m"  // Reset to default color
#define RED     "\033[31m" // Red color
#define GREEN   "\033[32m" // Green color
#define YELLOW  "\033[33m" // Yellow color
#define CYAN    "\033[36m" // Cyan color

class Harl
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
public:
    Harl(/* args */);
    ~Harl();

    void complain( std::string level );
};



#endif