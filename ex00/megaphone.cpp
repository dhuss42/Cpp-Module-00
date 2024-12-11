#include <iostream>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; j < (int)strlen(argv[i]); j++)
            std::cout << (char)std::toupper(argv[i][j]); // typecast because it returns an int
    }
    std::cout << std::endl;
    return (0);
}
