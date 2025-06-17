#include <iostream>

const int total =10;
const int check = 8;
int student[total];
int complete;

int main()
{
    for (int i=0; i<total; i++)
    {
        student[i]=i+1;
    }
    std::cout << student[9] << std::endl;
    for (int j=0; j<check; j++)
    {
        std::cin >> complete;
        student[complete-1] = 0;
    }
    for (int k=0; k<total; k++)
    {
        if (student[k] != 0)
        {
            std::cout << "---------" << std::endl;
            std::cout << k+1 <<": " << student[k] << std::endl;
        }
    }
    
    return 0;
}
