// #include <iostream>
// #include <string>

// std::string S;
// std::string P;
// int R;

// int main()
// {
//     std::cin >> R;
//     std::cin.ignore();             
//     std::getline(std::cin, S);     // 공백 포함해서 S 입력받기

    
//     int S_size = S.size();
//     int count = 0;
//     int temp;

//     for(int i=0; i<S_size; i++)
//     {
//         for(int j=count; j<count + R; j++)
//         { 
//             P += S[i];
//             temp = j;
//         }
//         count = temp;
        
//     }   
//     std::cout << P << std::endl;

//     return 0;
// }

#include <iostream>
#include <string>

int main() {
    int T; 
    std::cin >> T;

    while (T--) {
        int R;
        std::string S;
        std::cin >> R >> S;

        for (char c : S) {
            for (int i = 0; i < R; i++) {
                std::cout << c;
            }
        }
        std::cout << '\n';
    }

    return 0;
}



/*
첫번째 문자열을 R만큼 반복

입력받은 수 만큼 새로운 P 문자열에 추가

문자열 S의 크기만큼 반복
*/