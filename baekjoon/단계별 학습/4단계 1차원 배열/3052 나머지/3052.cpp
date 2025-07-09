#include <iostream>

int A[10];
int B[10];

int main()
{
    for (int i = 0; i < 10; i++)
    {
        std::cin >> A[i];
        B[i] = A[i] % 42;
    }

    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        bool is_new = true;
        for (int j = 0; j < i; j++)
        {
            if (B[i] == B[j])
            {
                is_new = false;
                break;
            }
        }
        if (is_new)
            count++;
    }

    std::cout << count << std::endl;

    return 0;
}
