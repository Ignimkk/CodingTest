#include <iostream>
using namespace std;

int A,B;
int main()
{
    while(true)
    {
        cin >> A >> B;
        if(cin.eof() == true)
        {
            break;
        }
        cout << A + B << endl;
    
    }
    return 0;
}