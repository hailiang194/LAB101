#ifndef FORM_INPUT_HPP
    #define FORM_INPUT_HPP

#include<algorithm>
#include<string>
#include<limits>
#include<exception>
#include<iostream>
#include<cctype>

namespace Input
{
    std::string trim(const std::string& original);
    int input(const std::string& prompt, const int MIN = std::numeric_limits<int>::min(), const int MAX = std::numeric_limits<int>::max());
    std::string input_str(const std::string& prompt);
    void hold();
    int compare_ignore_case(std::string s1, std::string s2);
    char input_chr(const std::string& prompt);
}

#endif //FORM_INPUT_HPP
