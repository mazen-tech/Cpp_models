#include "../header/replace.hpp"

Replace::Replace(std::string file) : Inputfile(file), Outputfile(file + ".replace") {}

Replace::~Replace() {}

void Replace::replace(std::string s1, std::string s2)
{
    if (s1 == s2)
    {
        std::cout << "Error: s1 = s2 \n";
        exit(EXIT_FAILURE);
    }

    std::ifstream infile(Inputfile.c_str());
    if (infile.is_open())
    {
        std::ofstream outFile(Outputfile.c_str());
        std::string line;

        /*now will read line from infile and stor in line 
        and then we will return the first position of s1
        in line and clear the s1 from line and insirt s2 in 
        it's place */

        while (std::getline(infile, line))
        {
            size_t position = line.find(s1, 0);
            while (position != std::string::npos)
            {
                line.erase(position, s1.length());
                line.insert(position, s2);
                position = line.find(s1, 0);
            }
            outFile << line << std::endl;
        }
        infile.close();
        outFile.close();
    }
    else
    {
        std::cerr << "unable to open. \n"; //cerr line cout but used to display errors
        exit(EXIT_FAILURE);
    }
}
        