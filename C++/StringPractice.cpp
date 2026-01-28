#include <string>

namespace log_line { // The namespace (although that's obvious)
    std::string message(std::string line) { // Message method
        // As the substr method receives an index
        // and the .find method returns an index it is possible to nest the method and move 2 indexes further
        return line.substr(line.find(": ") + 2);
    }

    std::string log_level(std::string line) { // log level method 
        // return the log level
        return line.substr(line.find("[") + 1, line.find("]") - 1);
    }

    std::string reformat(std::string line) { // reformat method
        // return the reformatted message
        std::string msg =  line.substr(line.find(" ") + 1);
        return msg + " (" + line.substr(line.find("[") + 1 ,line.find("]") - 1) + ")";
    }
}
