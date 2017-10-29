//
//  FibCache.cpp
//  fib
//
//  Created by Roy Moran on 10/29/17.
//  Copyright © 2017 Roy Moran. All rights reserved.
//

#include "FibCache.hpp"

// FibCache contructor to initialize size of
// array
FibCache::FibCache(long int size){
    // add elements to vector array
    do {
        cache.push_back(size);
        size--;
    } while (size >= 0);
}
