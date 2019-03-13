/*********************************************************************
** Author:          Sandro Aguilar
** Date:            March 11, 2019
** Description:     This class implements iteration to find the Nth
**                  fibonacci value using iteration.
*********************************************************************/
#ifndef NONRECURSIVEFIBONACCI_HPP
#define NONRECURSIVEFIBONACCI_HPP

#include <iostream>
using std::cout;
using std::endl;

class FibonacciNR {
private:
    FibonacciNR();
    int Fibonacci(const int &n);
    const int* n_;

public:
    FibonacciNR(const int &n);
    virtual ~FibonacciNR();
    void PrintFibonacci();
};

#endif // NONRECURSIVEFIBONACCI_HPP