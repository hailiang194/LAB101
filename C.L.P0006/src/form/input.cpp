#include"input.hpp"


std::string Input::trim(const std::string& original)
{
    std::size_t first = original.find_first_not_of(' ');
    if(std::string::npos == first)
    {
        return original;
    }

    std::size_t last = original.find_last_not_of(' ');
    return original.substr(first, (last - first + 1));
}

int Input::input(const std::string& prompt, const int MIN, const int MAX)
{
    std::cout << prompt;
    std::string line;
    getline(std::cin, line);

    line = Input::trim(line);

    for(std::size_t i = 0; i < line.length(); ++i)
    {
        if(!isdigit(line[i]))
            throw std::overflow_error("Invalid input");
    }

    int input = stoi(line);

    if((input < MIN) || (input > MAX))
        throw std::out_of_range("Input is out of range");

    return input;
}

std::string Input::input_str(const std::string& prompt)
{
    std::cout << prompt;
    std::string line;
    getline(std::cin, line);
    return line;
}

void Input::hold()
{
    std::string line;
    getline(std::cin, line);
}

int Input::compare_ignore_case(std::string s1, std::string s2)
{
    std::transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    std::transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    return s1.compare(s2);
}

char Input::input_chr(const std::string& prompt)
{
    std::string input = Input::trim(Input::input_str(prompt));

    if(input.length() > 1)
        throw std::length_error("Invalid input: Input more than one character");

    return input[0];
}
