#include "grains.h"
#include <cmath>
#include <iostream>
using namespace std;

namespace grains {
    long long unsigned int square (int number) {
        unsigned long long  result = static_cast <unsigned long long> (llround(pow(2, number-1)));
        return result;
    }
    long long unsigned int total (void) {
        int i = 0;
        int total = 0;
        while (i < 64) {
            total += square(i+1);
            i++;
        }
        return total;
    }

// TODO: add your solution here

}  // namespace grains
