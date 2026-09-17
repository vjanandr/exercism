#include "reverse_string.h"

namespace reverse_string {
    std::string reverse_string (std::string str) {
        int len = str.length();
        int start = 0, end = len-1;
        while (start < end) {
            char tmp;
            tmp = str[start];
            str[start] = str[end];
            str[end] = tmp;
            end--;
            start++;
        }
        return str;
    }
}
