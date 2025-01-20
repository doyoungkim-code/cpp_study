#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    int i, j;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    j = 1;
    while (argv[j])
    {
        if (j >= 2)
            std::cout << " ";
        i = 0;
        while (argv[j][i])
        {
            if (islower(argv[j][i]))
                std::cout << (char)toupper(argv[j][i]);
            else
                std::cout << argv[1][i];
            i ++;
        }
        j ++;
    }
    std::cout << std::endl;
    return (0);
}