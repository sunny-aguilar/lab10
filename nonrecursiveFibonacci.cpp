/*********************************************************************
** Author:          Sandro Aguilar
** Date:            March 11, 2019
** Description:     D
**                  D
**                  d
**                  d
**                  d
*********************************************************************/
#include "nonrecursiveFibonacci.hpp"
#include <iostream>

FibonacciNR::FibonacciNR() {}
git commit -am "lab10"
FibonacciNR::FibonacciNR(const int &n):n_(&n) {}

FibonacciNR::~FibonacciNR() {}

int FibonacciNR::Fibonacci(const int &n) {
    int first = 0;
    int second = 1;
    counter = 2;
    while(counter < n) {
        int temp=second;
        second=first+second;
31         first=temp;
32         ++counter;
33     }
34     if(n==0)
35         return 0;
36     else
37         return first+second;
38  }
39  void FibonacciNR::PrintFibonacci(){
    40     const int result = Fibonacci(*n_);
    41     std::cout<<*n_<<"th fibonacci Number:"<<result<<std::endl;
    42  }