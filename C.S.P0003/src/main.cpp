#include<iostream>
#include<stdexcept>
#include<limits>
#include<algorithm>
#include<vector>
#include<string>
#include<cctype>

std::string trim(const std::string& original);
int input(const std::string& prompt, const int MIN = std::numeric_limits<int>::min(), const int MAX = std::numeric_limits<int>::max());
void show(const std::vector<int>& elements);
void insert(std::vector<int>& elements, const int& value);

int main()
{
    int n = 0;
    while(true)
    {
        try
        {
            std::string prompt = "Enter number of elements: ";
            n = input(prompt, 0);
            break;
        }
        catch(std::exception& ex)
        {
            std::cout << "ERROR: " << ex.what() << std::endl;
            std::cout << "Try again" << std::endl;
            continue;
        }
    }

    std::vector<int> elements;

    for(std::size_t i = 0; i < n; ++i)
    {
        int element = 0;
        while(true)
        {
            try
            {
                std::string prompt = "Enter value of element: ";
                element = input(prompt);
                break;
            }
            catch(std::exception& ex)
            {
                std::cout << "ERROR: " << ex.what() << std::endl;
                std::cout << "Try again" << std::endl;
                continue;
            }
        }
        elements.push_back(element);
    }
    
    std::sort(elements.begin(), elements.end());
    show(elements);

    int element = 0;
    while(true)
    {
        try
        {
            std::string prompt = "Enter value of element: ";
            element = input(prompt);
            break;
        }
        catch(std::exception& ex)
        {
            std::cout << "ERROR: " << ex.what() << std::endl;
            std::cout << "Try again" << std::endl;
            continue;
        }
    }

    insert(elements, element);
    std::cout << "New array: " << std::endl;
    show(elements);

    return 0;
}

std::string trim(const std::string& original)
{
    std::size_t first = original.find_first_not_of(' ');
    if(std::string::npos == first)
    {
        return original;
    }

    std::size_t last = original.find_last_not_of(' ');
    return original.substr(first, (last - first + 1));
}

int input(const std::string& prompt, const int MIN, const int MAX)
{
    std::cout << prompt;
    std::string line;
    getline(std::cin, line);

    line = trim(line);

    for(std::size_t i = 0; i < line.length(); ++i)
    {
        if(i == 0 && line[i] == '-')
            continue;

        if(!isdigit(line[i]))
            throw std::overflow_error("Invalid input");
    }

    int input = stoi(line);

    if((input < MIN) || (input > MAX))
        throw std::out_of_range("Input is out of range");

    return input;
}

void show(const std::vector<int>& elements)
{
    for(const int& element: elements)
    {
        std::cout << element << " ";
    }

    std::cout << std::endl;
}

void insert(std::vector<int>& elements, const int& value)
{
    elements.push_back(value);

    std::size_t i = 0;
    for(i = elements.size() - 1; i >= 1; --i)
    {
        elements.at(i) = elements.at(i - 1);
        if(elements.at(i) <= value)
        {
            break;
        }
    }

    elements.at(i) = value;
}
