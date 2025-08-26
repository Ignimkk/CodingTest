#include <iostream>
#include <cmath>

int num[5];
int sum = 0;

int main()
{
    for(int i=0; i<5;i++)
    {
        std::cin >> num[i];
        sum = sum + pow(num[i], 2);
    }
    int result = sum % 10;
    std::cout << result;


    return 0;
}