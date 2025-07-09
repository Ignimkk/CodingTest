#include <iostream>
#include <string>

std::string S;
int i;
char A;

int main()
{
    std::cin >> S >> i;
    A = S[i-1];
    std::cout << A << std::endl; 

    return 0;
}