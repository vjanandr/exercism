#include "leap.h"

namespace leap {
    bool is_leap_year (int year) {
        if (!(year % 4) && (year % 100)) {
            return true;
        }
        if (!(year % 400)) {
            return true;
        }
        return false;
    }
}  // namespace leap
