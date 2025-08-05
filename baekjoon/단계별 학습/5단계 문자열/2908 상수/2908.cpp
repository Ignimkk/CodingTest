#include <iostream>
#include <string>

std::string num1, num2;
int num11 = 0;
int count = 1;
int num22 = 0;

int main()
{
    std::cin >> num1 >> num2;

    for(char c : num1)
    {
        num11 += (int(c)-'0') * count;
        count = count * 10; 
        // std::cout << num11 << std::endl;

    }
    count = 1;
    for(char c : num2)
    {
        num22 += (int(c)-'0') * count;
        count = count * 10; 
        // std::cout << num22 << std::endl;

    }

    if(num11 > num22)
    {
        std::cout << num11 << std::endl;
    }
    else if(num11 < num22)
    {
        std::cout << num22 << std::endl;
    }

    return 0;
}

