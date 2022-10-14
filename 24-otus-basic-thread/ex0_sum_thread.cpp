#include <iostream>
#include <chrono>
#include <cstdlib>
#include <random>
#include <thread>
#include <string>

using std::cout;
using std::cerr;
using std::endl;

// const long int N = 1000000;

void make_summation(const unsigned long long i_start, 
                    const unsigned long long i_end, 
                    unsigned long long & sum)
{
    for (unsigned long long k = i_start; k < i_end; ++k)
    {
        sum += k;
    }
}

int main(int argc, char * argv[])
{
    if (argc < 3) {
        cout << "Usage: " << argv[0] << " [number of threads] [N]\n";
        return EXIT_FAILURE;
    }

    int n_threads = std::stoi(argv[1]);
    if (n_threads < 1) {
        cerr << "number of threads must be positive integer\n";
        return EXIT_FAILURE;
    }

    unsigned long N = std::stoi(argv[2]);
    if (N < 1) {
        cerr << "number of threads must be positive integer\n";
        return EXIT_FAILURE;
    }

    unsigned long long sum = 0;
    unsigned long long step = N / n_threads;

    std::vector<std::thread> thrs;
    for (int i = 0; i < n_threads; ++i) {
        thrs.emplace_back(make_summation, i * step, (i + 1) * step, std::ref(sum));
    }

    for (auto &thr_item : thrs) {
        thr_item.join();
    }

    std::cout << "Final result = " << sum << std::endl;

    return 0;
}

