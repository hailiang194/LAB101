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

int Input::input(const std::string prompt, const int MIN, const int MAX)
{
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

void Input::hold()
{
    std::string line;
    getline(std::cin, line);
}
