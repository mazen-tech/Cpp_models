#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream> //file stream
#include <cstdlib>

class Replace
{
    private:
        std::string Inputfile;
        std::string Outputfile;

    public:
        Replace(std::string file);
        ~Replace();

    void replace(std::string s1, std::string s2);
};

#endif