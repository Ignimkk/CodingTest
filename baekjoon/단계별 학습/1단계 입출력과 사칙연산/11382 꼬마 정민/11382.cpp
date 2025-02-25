#include <iostream>

unsigned long int A;
unsigned long int B;
unsigned long int C;

int main()
{
    std::cin >> A >> B >> C;
    std::cout << A + B + C << std::endl;
    return 0;
}

// unsigned long int 타입이 왜 되냐 ㅅㅂ 
// 여튼 1<A,B,C<10^12은 양수 인 수를 원했으니 int말고 다른 타입으로 ㄱ
