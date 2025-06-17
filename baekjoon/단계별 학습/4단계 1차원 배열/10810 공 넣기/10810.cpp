#include <iostream>
int N,M;
int i,j,k;
int main()
{
    std::cin >> N >> M;
    int bag[N];
    for (int i = 0; i < N; i++)
    {
        bag[i] = 0;
    }
    for (M; M>0;M--)
    {
        std::cin >> i >> j >> k;
        for (i; i<j+1; i++)
        {
            bag[i-1]=k;
        }
    }
    for (int i = 0; i < N; i++)
    {
        std::cout << bag[i] << " ";
    }

    
    return 0;
}
// 참고 자료
// https://velog.io/@dlwhsk0/Cpp-C-%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%98%EB%B0%8D-%EA%B8%B0%EC%B4%88-Ch.5-%EB%B0%B0%EC%97%B4-Array-1%EC%B0%A8%EC%9B%90-%EB%B0%B0%EC%97%B4-2%EC%B0%A8%EC%9B%90-%EB%B0%B0%EC%97%B4