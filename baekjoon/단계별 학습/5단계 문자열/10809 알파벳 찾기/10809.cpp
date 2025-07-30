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