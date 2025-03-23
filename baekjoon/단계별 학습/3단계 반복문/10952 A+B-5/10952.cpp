#include <iostream>
using namespace std;

int A,B;
int trigger = 1;
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    while(trigger == 1)
    {
        cin >> A >> B;
        if (A == 0 && B == 0)
        {
            // trigger = 0;
            break;
        }
        cout << A + B << "\n";
    }
    return 0;
}