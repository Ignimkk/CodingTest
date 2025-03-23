#include <iostream>
using namespace std;
int A;

int main()
{
    cin >> A;
    for (int count = 1; count <= A; count++)
    {
        for (int B = 0; B<count; B++)
        {
            cout << "*";
        }
        cout<<endl;
    }

    return 0;
}
