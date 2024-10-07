#include <iostream>

int n;
void input();
void equation();
int result;
int a = 1;

int main()
{
    input();
    result = n * a;
    while (true)
    {
        equation();

    }
    





    return 0;
}

void input()
{
    while(true)
    {
        std::cin >> n; 

        if (n%2 != 0 && n%5 != 0 && 1 <= n && n <= 10000)
        {
            break;
        }
    }
};

void equation()
{
    while(result > 0)
    {
        if (result % 10 == 1)
        {
            result /= 10;   
        }
        else
        {
            a++;
        }
    }
};