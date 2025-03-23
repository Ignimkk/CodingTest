#include <iostream>

int n;
int m=0;
int main()
{
    std::cin >> n;
    for (n; n>=1; n--)
    {
        m = n + m;
    }
    std::cout << m << std::endl; 
    
    return 0;
}