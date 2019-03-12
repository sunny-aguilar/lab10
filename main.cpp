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

int main(int argc, char** args) {
    const char* input; //Note: char by default initializes to '\0'
    if(args[1] != nullptr) {
        cout << "1st passed argument: '" << args[1] << "'" << endl;
        input = args[1];
    }

    int n = atoi(input);        // converts string to integer

    cout << "Finding '" << n << "'th " << "fibonacci number...." << endl;
    cout << "Calling Recursive Fibonacci implementation" << endl;

    FibonacciR fr(n);
    fr.PrintFibonacci();

    cout << "Calling Non-Recursive Fibonacci implementation" << endl;

    FibonacciNR fnr(n);
    fnr.PrintFibonacci();

    cout << "Done!!!!" << endl;

    return 0;
}