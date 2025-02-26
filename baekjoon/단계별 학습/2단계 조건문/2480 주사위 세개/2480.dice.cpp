#include <iostream>

int A;
int B;
int C;
int sum;
int max;
int main()
{
    std::cin >> A >> B >> C;
    
    if ((A==B || A==C) && B!=C)
    {
        sum = 1000 + A*100;
    }
    else if (B==C && (A!=C || B!=A))
    {
        sum = 1000 + B*100;
    }
    else if (A == B && B == C && A == C)
    {
        sum = 10000 + A*1000;
    }
    else{
        max = A > B ? (A > C ? A : C) : (B > C ? B : C);

        sum = 100*A;
    }
    std::cout << sum << std::endl;

    
    
    return 0;
}



// if 두개가 같은경우, 3개가 같은경우, 