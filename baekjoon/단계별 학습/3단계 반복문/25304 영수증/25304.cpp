#include <iostream>

int X,N,a,b;
int sum;
int main()
{
    sum =0;
    std::cin >> X;
    std::cin >> N;
    for (N; N>0;N--)
    {
        std::cin >> a >> b;
        sum = sum + a*b;
    }
    if (X == sum)
    {
        std::cout << "Yes" << std::endl;
    }
    else{
        std::cout << "No" << std::endl;
    }


    return 0;

}