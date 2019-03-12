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
#include <iostream>
git commit -am "lab10"

FibonacciR::FibonacciR() {}

FibonacciR::FibonacciR(const int &n):n_(&n) { }

FibonacciR::~FibonacciR() {}

int FibonacciR::Fibonacci(const int &n){
    if(n==0) {
        return 0;
    }
    else if(n==1) {
        return 1;
    }
    return Fibonacci(n-1) + Fibonacci(n-2);
}

void FibonacciR::PrintFibonacci() {
    int FibonaciNum=Fibonacci(*n_);
    cout<<*n_<<"th fibonaci number: "<<FibonaciNum<<std::endl;

    30  }