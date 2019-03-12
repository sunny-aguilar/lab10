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
    if(args[1]!=0) {
        cout<<"1st passed arguement: '"<<args[1]<<"'"<<endl;
        26             input= args[1];
        27         }
    28         int n= atoi(input);
    29         cout<<"Finding '"<<n<<"'th "<<"fibonacci number...."<<endl;
    30         cout<<"Calling Recursive Fibonacci implementation"<<endl;
    31         FibonacciR fr(n);
    32         fr.PrintFibonacci();
    33         cout<<"Calling Non-Recursive Fibonacci implementation"<<endl;
    34         FibonacciNR fnr(n);
    35         fnr.PrintFibonacci();
    36         cout << "Done!!!!" << endl;


    return 0;
}