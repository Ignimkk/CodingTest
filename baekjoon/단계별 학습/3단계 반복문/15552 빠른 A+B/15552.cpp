#include <iostream>

int T;
int A, B;
int main()
{
    std::cin.tie(NULL); 
    std::ios_base::sync_with_stdio(false);
    std::cin >> T;
    for (T;T>0;T--)
    {
        std::cin >> A >> B;
        std::cout << A + B<< "\n";

    }

    return 0;
}