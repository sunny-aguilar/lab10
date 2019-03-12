/*********************************************************************
** Author:          Sandro Aguilar
** Date:            March 11, 2019
** Description:     D
**                  D
**                  d
**                  d
**                  d
*********************************************************************/
#ifndef NONRECURSIVEFIBONACCI_HPP
#define NONRECURSIVEFIBONACCI_HPP

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
git commit -am "lab10"
#endif // NONRECURSIVEFIBONACCI_HPP