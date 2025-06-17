#include <iostream>

int num;
int Shuffle;
int i,j;
int temp;

int main()
{
    std::cin >> num >> Shuffle;
    int Bag[num];
    for (int a=0; a<num; a++)
    {
        Bag[a] = a+1;
    }
    for (int b=0; b<Shuffle; b++)
    {
        std::cin >> i >> j;
        temp = Bag[i-1];
        Bag[i-1] = Bag[j-1];
        Bag[j-1] = temp;
    }
    for (int k = 0; k<num; k++)
    {
        std::cout << Bag[k] <<" ";
    }
    return 0;
}