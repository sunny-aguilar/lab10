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
    12  public:
    13     FibonacciR(const int &n);
    14     virtual ~FibonacciR();
    15     void PrintFibonacci();
    16  private:
    17     FibonacciR();
    18     int Fibonacci(const int &n);
    19     const int *n_;
    20  };

#endif // RECURSIVEFIBONACCI_HPP
git commit -am "lab10"