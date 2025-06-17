#include <iostream>

int N = 9;
int max = 0;
int count;
int num;

int main()
{
    for (int i = 0; i<N; i++)
    {
        std::cin >> num;
        if (num > max)
        {
            max = num;
            count = i+1;
        }
    }
    std::cout << max << std::endl;
    std::cout << count << std::endl;
    return 0;
}