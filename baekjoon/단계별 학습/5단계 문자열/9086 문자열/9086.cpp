#include <iostream>
#include <string>

int num;
std::string word;

int main()
{
    std::cin >> num;
    for (int i=0; i<num; i++)
    {
        std::cin >> word;
        int word_len = word.size();
        // std::cout << word_len << std::endl;
        std::cout << word[0] << word[word_len-1] << std::endl;
    }

    return 0;
}