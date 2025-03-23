#include <iostream>

int A,B;
int T;
int main()
{
    std::cin >> T;
    for (int count=0; count < T; count++)
    {
        std::cin >> A >> B;
        std::cout << A+B << std::endl;
    }
    
    
    return 0;
}