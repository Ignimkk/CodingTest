#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string str;
    std::getline(std::cin, str);
    std::vector<std::string> words;
    std::string word;
    for (char c : str) {
        if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    int size = words.size();
    std::cout << size << std::endl;

    return 0;
}