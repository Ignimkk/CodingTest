#include <iostream>

int A;
int B;
int C;

int main()
{   
    std::cin >> A >> B;
    std::cin >> C;
    B = C+B;

    if (B > 59)
    {        
        A = A + (B)/60;
        B = B%60;
        if (A > 23)
        {
            A = A%24;
            
        }
    }
    std::cout << A << " " << B << std::endl;
    
    return 0;
}


// B+C가 60보다 크면 +1 120보다 크면 +2 즉 나눈 몫
// A 가 24이상이면 -24