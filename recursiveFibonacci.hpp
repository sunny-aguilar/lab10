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

class FibonacciR {
public:
    FibonacciR(const int &n);
    virtual ~FibonacciR();
    void PrintFibonacci();
private:
    FibonacciR();
    int Fibonacci(const int &n);
    const int *n_;
};

#endif // RECURSIVEFIBONACCI_HPP
git commit -am "lab10"