#include <iostream>

int H;
int M;
int n_M;
int main()
{
    std::cin >> H >> M;
    n_M = M-45;
    
    if (n_M<0)
    {
        H = H-1;
        n_M = n_M+60;
        if (H<0)
        {
            H = H+24;
        }
        std::cout << H << " " << n_M << std::endl;

    }
    else{
        std::cout << H <<" "<< n_M << std::endl;
    }

    return 0;
}