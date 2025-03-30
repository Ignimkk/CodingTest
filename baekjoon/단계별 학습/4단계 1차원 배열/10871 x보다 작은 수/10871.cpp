#include <iostream>

using namespace std;

int N, X;
int main()
{
    cin >> N >> X;
    int A[N-1];
    for (int count = 0; count < N; count++)
    {
        cin >> A[count];
    }
    for (int p = 0; p < N; p++ ) 
    {
        if( A[p] < X)
        {
            cout << A[p] << " ";
        }

    }



    return 0;
}