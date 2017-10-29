//
//  FibCalculator.cpp
//  fib
//
//  Created by Roy Moran on 10/29/17.
//  Copyright © 2017 Roy Moran. All rights reserved.
//

#include "FibCalculator.hpp"
#include "FibCache.hpp"
#include <iostream>

// calculate the fibonacci number of n using recursive method
// following the formula F(n) = F(n-1) + F(n-2)
int FibCalculator::calculate(int n){
    if(n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        n = calculate(n-1) + calculate(n-2);
    return n;
}

// calculate the fibonacci number of n using the dynamic programming
// method following the formula F(n) = F(n-1) + F(n-2)
int FibCalculator::calculate(int n, FibCache fibCache){
    // initialize base values
    fibCache.cache[0] = 0;
    fibCache.cache[1] = 1;
    
    // calculate and store fibonacci numbers
    for (int i = 2; i < n + 1; i++) {
        fibCache.cache[i] = fibCache.cache[i - 1] + fibCache.cache[i - 2];
    }
    return fibCache.cache[n];
}
