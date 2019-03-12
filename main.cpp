/*********************************************************************
** Author:          Sandro Aguilar
** Date:            March 11, 2019
** Description:     D
**                  D
**                  d
**                  d
**                  d
*********************************************************************/
#include "recursiveFibonacci.hpp"
#include "nonrecursiveFibonacci.hpp"
#include <cstdlib>
#include <chrono>
#include <ctime>
#include <iomanip>
using std::fixed;

int main() {
    int N = 40;

    // Using time point and system_clock
    std::chrono::time_point<std::chrono::system_clock> start, end;

    // calculating fibonacci using recursion
    cout << "Finding '" << N << "'th " << "fibonacci number...." << endl << endl;
    cout << "Calling Recursive Fibonacci implementation" << endl;

    start = std::chrono::system_clock::now();
    FibonacciR fr(N);
    fr.PrintFibonacci();
    end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);

    std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";



    // calculating fibonacci using iteration
    cout << "\nCalling Non-Recursive Fibonacci implementation" << endl;

    // Using time point and system_clock
    std::chrono::time_point<std::chrono::system_clock> start2, end2;

    start2 = std::chrono::system_clock::now();
    FibonacciNR fnr(N);
    fnr.PrintFibonacci();
    end2 = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds2 = end2 - start2;
    std::time_t end_time2 = std::chrono::system_clock::to_time_t(end2);

    std::cout << "elapsed time: " << fixed << elapsed_seconds2.count() << "s\n";


    cout << "\nDone!!!!" << endl;

    return 0;
}