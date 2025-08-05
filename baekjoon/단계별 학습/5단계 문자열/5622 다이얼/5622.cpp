#include <iostream>
#include <string>

std::string words;
int time = 0;

int main()
{
    std::cin >> words;

    for(char c : words)
    {
        if(c == 'A' || c =='B' || c=='C')
        {
            time += 3;

        }
    }



    return 0;
}