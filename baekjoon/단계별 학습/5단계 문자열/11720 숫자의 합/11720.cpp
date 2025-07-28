#include <iostream>
#include <string>
using namespace std;

std::string word;
int num;

int convert()
{
    int sum = 0;
    for (int i=0; i<num; i++)
    {
        sum = sum + word[i] - '0';
    }
    return sum;
    
}

int main()
{
    std::cin >> num;
    std::cin >> word;
    int result = convert();
    cout << result << endl;
    return 0;
}

/*
1. 문자열로 받기
2. size 파악
3. for 문돌리기 문자열을 숫자로 변환하여 더하기
3. ㅎㅎㅎ
*/ 
