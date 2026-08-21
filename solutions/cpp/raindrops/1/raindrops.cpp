#include "raindrops.h"
#include <string>

namespace raindrops {
    std::string convert (int num) {
        std::string ret_string {""};
        bool devisibility = false;
        if (!(num % 3)) {
            ret_string = ret_string + "Pling";
            devisibility = true;
        }
        if (!(num % 5)) {
            ret_string = ret_string + "Plang";
            devisibility = true;
        }
        if (!(num % 7)) {
            ret_string = ret_string + "Plong";
            devisibility = true;
        }
        if (!devisibility) {
            ret_string = ret_string + std::to_string(num);
        }
        return (ret_string);
    }

// TODO: add your solution here

}  // namespace raindrops
