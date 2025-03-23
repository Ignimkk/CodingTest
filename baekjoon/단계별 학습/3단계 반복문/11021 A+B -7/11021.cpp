#include <iostream>
using namespace std;

int T,A,B;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> T;
    for (int count= 1;count <= T; count++)
    {
        cin >> A >> B;
        cout << "Case " << "#" << count <<": "<< A+B <<"\n";
    }
    return 0;
}