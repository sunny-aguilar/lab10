/*********************************************************************
** Author:          Sandro Aguilar
** Date:            March 11, 2019
** Description:     This class implements iteration to find the Nth
**                  fibonacci value using iteration.
*********************************************************************/
#include "nonrecursiveFibonacci.hpp"
#include <iostream>

FibonacciNR::FibonacciNR() {}

FibonacciNR::FibonacciNR(const int &n) : n_(&n) {}

FibonacciNR::~FibonacciNR() {}

int FibonacciNR::Fibonacci(const int &n) {
    int first = 0;
    int second = 1;
    int counter = 2;

    while(counter < n) {
        int temp = second;
        second = first + second;
        first = temp;
        ++counter;
    }
    if(n == 0) {
        return 0;
    }
    else {
        return first + second;
    }
}

void FibonacciNR::PrintFibonacci() {
    const int result = Fibonacci(*n_);
    cout << *n_ << "the fibonacci Number:" << result << endl;
}