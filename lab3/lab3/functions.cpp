#include "functions.h"

// Split
std::vector<std::string>split(const std::string& str, char sym) {
    std::vector<std::string> result; // результат
       int length_str = str.length();
       if (!str.empty()) { // Проверка на пустое строку
            std::string count = "";
            for(int i = 0; i < length_str; i++) {
                if(str[i] == sym) {
                    result.push_back(count);
                    count = "";
                } else {
                    count += str[i];
                }
            }
            result.push_back(count);
        }
        return result;
}
