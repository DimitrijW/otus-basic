#include <iostream>

const int N = 1000000;

void make_summation(const int i_start, const int i_end, int & sum)
{
    for (int k = i_start; k < i_end; ++k)
    {
        sum += k;
    }
}

int main(int , char * [])
{
    int sum = 0;
    make_summation(0, N, sum);

    std::cout << "Final result = " << sum << std::endl;

    return 0;
}