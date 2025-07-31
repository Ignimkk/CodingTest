#include <iostream>
#include <string>

int array[25];
std::string S;
int S_size;

int main()
{
    for(int i=0; i<26; i++)
    {
        array[i] = -1;
    }
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::cin >> S;
    S_size = S.size();
    
    for(int j=0; j<S_size; j++)
    {
        int word_num= int(S[j]) - 'a';

        if( array[word_num] < 0)
        {
            array[word_num] = j;
        }
        
    }

    for(int k=0; k<26; k++)
    {
        std::cout << array[k] << " ";
    }

    return 0;
}

// sync_with_stdio(false)를 사용하면 이 동기화를 끊어 C++ 스트림만 사용하는 조건에서 입출력이 훨씬 빨라집니다.