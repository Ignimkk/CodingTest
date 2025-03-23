#include <iostream>

int N;


int main()
{
   std::cin >> N;
   
   for (int count=1; count<10; count++)
   {
        std::cout << N << " * " << count << " = " <<N * count<< std::endl;     
   }   

    return 0;
}


// 