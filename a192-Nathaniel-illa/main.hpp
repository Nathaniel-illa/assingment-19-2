#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <string>
using namespace std;

int countLetter(std::string str, char ch);

int countLetter(string str, char ch) {
    // Base case: when the string is empty
    if (str.empty()) {
        return 0;
    }
    
    // Check if the first character matches the target character
    int count = (str[0] == ch) ? 1 : 0;

    // Recursive call with the substring excluding the first character
    return count + countLetter(str.substr(1), ch);
}

#endif // MAIN_HPP
