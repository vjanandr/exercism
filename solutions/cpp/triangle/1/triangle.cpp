#include "triangle.h"


namespace triangle {
    flavor kind (double a, double b, double c) {
        if (a == 0 || b == 0 || c == 0) {
            throw std::domain_error("one of the side is zero not a triangle");
        }
        if (!((a + b >= c) && 
              (b + c >= a) &&
              (c + a >= b))) {
            throw std::domain_error("not a triangle");
        }
        if (a == b && b == c && c == a) {
            return equilateral;
        }
        if ((a == b && a != c) ||
            (a == c && a != b) ||
            (b == c && a != c)) {
            return isosceles;
        }
        return scalene;
    }
}
