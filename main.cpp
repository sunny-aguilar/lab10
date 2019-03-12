/*********************************************************************
** Author:          Sandro Aguilar
** Date:            March 11, 2019
** Description:     The Game class controls all of the game operations
**                  required to control the game.
**                  d
**                  d
**                  d
**                  d
**                  d
*********************************************************************/
#include <iostream>
using std::cout;
using std::endl;

int main() {
    const char* input; //Note: char by default initializes to '\0'
    if(args[1] != 0) {
        cout << "1st passed arguement: '" << args[1] << "'" << endl;
        input = args[1];
    }
    int n= atoi(input);
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