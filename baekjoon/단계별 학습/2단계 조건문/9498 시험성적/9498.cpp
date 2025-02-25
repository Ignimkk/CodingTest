#include <iostream>

int score;

int main()
{
    std::cin >> score;

    if (90<=score && score<=100)
    {
        std::cout << "A"<<std::endl;
    }
    else if (80<=score && score<90)
    {
        std::cout << "B"<<std::endl;
    }
    else if (70<=score && score<80)
    {
        std::cout << "C"<<std::endl;
    }
    else if (60<=score && score<70)
    {
        std::cout << "D"<<std::endl;
    }
    else{
        std::cout << "F"<<std::endl;
    }
    
    
    
    return 0;
}

