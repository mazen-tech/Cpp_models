#include "../header/replace.hpp"

int main(int argc, char* argv[])
{
    if (argc != 4)
    {
        std::cerr << "Usage: ./program <filename> <string_to_replace> <replacement_string>\n";
        return 1;
    }

    // Input parameters from the command line
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    // Create a Replace object
    Replace replacer(filename);

    // Perform the replace operation
    replacer.replace(s1, s2);

    std::cout << "Replacement operation completed successfully.\n";
    
    return 0;
}
