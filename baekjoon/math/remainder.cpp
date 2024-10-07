#include <iostream>

int A;
int B;
int C;


void remain();

int main()
{
    std::cin >> A >> B >> C;

    remain();

    return 0;
}

void remain()
{
    int eq1 = (A+B)%C;
    int eq2 = ((A%C) + (B%C))%C;
    int eq3 = (A*B)%C;
    int eq4 = ((A%C) * (B%C))%C;

    std::cout << eq1 <<std::endl;
    std::cout << eq2 <<std::endl;
    std::cout << eq3 <<std::endl;
    std::cout << eq4 <<std::endl;
}