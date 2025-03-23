#include <iostream>
using namespace std;
int A;

int main()
{
    cin >> A;
    const int F = A;
    for ( A; A > 0; A--)
    {
        int B = A-1;
        int C = F - B;
        for (B; B>0; B--)
        {
            cout << " ";
        }
        for(C; C>0;C--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
