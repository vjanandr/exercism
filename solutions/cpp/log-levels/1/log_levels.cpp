#include <string>

namespace log_line {
std::string message(std::string line) {
    return (line.substr(line.find("]:") + 3));
    // return the message
}

std::string log_level(std::string line) {
    int first =0;
    int second = 0;
    first = line.find("[") + 1;
    second = line.find("]:") - 1;
    
    return (line.substr(first,second));
    // return the log level
}

std::string reformat(std::string line) {
    // return the reformatted message
    return message(line) + " (" + log_level(line) + ")";
}
}  // namespace log_line
