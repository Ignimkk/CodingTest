#include <iostream>
#include <cmath>
int N,M;
int a,b;

int main()
{
    std::cin >> N >> M;
    int bag[N];
    for (int i=0; i<N ; i++)
    {
        bag[i]=i+1;
    }
    for (int j=0; j<M; j++)
    {
        std::cin >> a >> b;
        a= a-1;
        b = b-1;
        double count= b-a;
        count = round(count/2);
        for (int k = 0; k<count;k++)
        {
            int temp = bag[a+k];
            bag[a+k] = bag[b-k];
            bag[b-k] = temp;
        }
    }

    for (int l=0;l<N;l++)
    {
        std::cout << bag[l] << " ";

    }

    return 0;
}

/* 벡터 활용해서 푼경우
#include <iostream>
#include <vector>

int main()
{
    int N, M;
    std::cin >> N >> M;

    std::vector<int> bag(N + 1);  // 1-based index 사용

    for (int i = 1; i <= N; i++)
    {
        bag[i] = i;
    }

    for (int j = 0; j < M; j++)
    {
        int a, b;
        std::cin >> a >> b;

        int count = (b - a + 1) / 2;
        for (int k = 0; k < count; k++)
        {
            int temp = bag[a + k];
            bag[a + k] = bag[b - k];
            bag[b - k] = temp;
        }
    }

    for (int i = 1; i <= N; i++)
    {
        std::cout << bag[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}

*/