#include <iostream>

int N;

int main()
{
    std::cin >> N;

    for (N; N>0; N--)
    {
        if (N%4 == 0)
        {
            std::cout << "long ";
        }
    }
    std::cout << "int" << std::endl;

    return 0;
}