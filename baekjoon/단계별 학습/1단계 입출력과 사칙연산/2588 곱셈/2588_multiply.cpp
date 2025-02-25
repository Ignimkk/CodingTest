#include <iostream>

int a;
int b;
int c;

int main()
{
    std::cin >> a;
    std::cin >> b;
    int c = a*(b%10);
    int d = a*((b%100)/10);
    int f = a*(b/100); 
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << f << std::endl;
    std::cout << c+ d*10 + f*100 << std::endl;

    return 0;
}