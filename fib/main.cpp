//
//  main.cpp
//  fib
//
//  Created by Roy Moran on 10/29/17.
//  Copyright © 2017 Roy Moran. All rights reserved.
//

#include <iostream>
#include "FibCache.hpp"
#include "FibCalculator.hpp"

int main(int argc, const char * argv[]) {
    int n, fib;
    FibCache fibCache(n);
    FibCalculator fibCalculator;
    
    std::cout << "Enter number to calculate Fibonacci value: ";
    std::cin >> n;

    fib = fibCalculator.calculate(n, fibCache); // Calculate with dynamic programming/caching method
    
    std::cout << "Fibonacci value is " << fib << std::endl;

    return 0;
}
