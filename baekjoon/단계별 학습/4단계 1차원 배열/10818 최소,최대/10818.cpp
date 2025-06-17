#include <iostream>

int N;

int main()
{
    std::cin >> N;
    int min = 1000000;
    int max = -1000000;
    for (int i = 0; i < N; i++)
    {
        int num;
        std::cin >> num;
        if (num < min)
            min = num;
        if (num > max)
            max = num;
    }
    std::cout << min << " " << max;
    return 0;
    

}