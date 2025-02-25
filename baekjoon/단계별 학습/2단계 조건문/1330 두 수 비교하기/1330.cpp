#include <iostream>

int A;
int B;
int main()
{
    std::cin >> A >> B;
    if (A > B)
    {
        std::cout << ">" << std::endl;   
    }
    else if (A < B)
    {
        std::cout << "<" << std::endl;
    }
    else if (A == B)
    {
        std::cout << "==" << std::endl;
    }


    
    return 0;
}