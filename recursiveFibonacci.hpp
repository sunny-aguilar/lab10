/*********************************************************************
** Author:          Sandro Aguilar
** Date:            March 11, 2019
** Description:     D
**                  D
**                  d
**                  d
**                  d
*********************************************************************/
#ifndef RECURSIVEFIBONACCI_HPP
#define RECURSIVEFIBONACCI_HPP

#include <iostream>
using std::cout;
using std::endl;

class FibonacciR {
private:
    FibonacciR();
    int Fibonacci(const int &n);
    const int *n_;
public:
    FibonacciR(const int &n);
    virtual ~FibonacciR();
    void PrintFibonacci();
};

#endif // RECURSIVEFIBONACCI_HPP