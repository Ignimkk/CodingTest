#include <iostream>
#include <vector>

int N,M;
int MAX_SCORE=0;
double sum;
double avg;

int main()
{
    std::cin >> N;
    std::vector<double> score(N);
    std::vector<double> new_score(N);

    for (int i=0;i<N;i++)
    {
        std::cin >> M;
        score[i] = M;
        if (MAX_SCORE < score[i])
        {
            MAX_SCORE = score[i];
        }
    }

    for (int j=0;j<N;j++)
    {
        new_score[j] = (score[j] / MAX_SCORE) * 100;
        sum = sum + new_score[j];
    }
    avg = sum / N;
    std::cout << avg << std::endl;


    return 0;
}


    