#include <iostream>
using namespace std;

int N;
int A;
int sum=0;
int v;
int main()
{
    cin >> N;
    int array[N-1];

    for (int count = 0; count<N; count++)
    {   
        cin >> A;
        array[count] = A;
    }
    cin >> v;
    for (N; N>0; N--)
    {
        if(array[N-1] == v)
        {
            sum = sum +1;
        }
    } 
    cout << sum << endl;
}

// method 2

/*
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> array(N);
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    int v;
    cin >> v;

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        if (array[i] == v)
        {
            sum++;
        }
    }

    cout << sum << endl;
    return 0;
}
*/