#include<iostream>
#include<stdexcept>
#include<limits>
#include<numeric>
#include<vector>
#include<string>
#include<cctype>

std::string trim(const std::string& original);
int input(const std::string& prompt, const int MIN = std::numeric_limits<int>::min(), const int MAX = std::numeric_limits<int>::max());
void show(const std::vector<int>& elements);

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
    
    show(elements);

    int even_sum = std::accumulate(elements.begin(), elements.end(), 0, [](const int& sum, const int& value)
            {
                return sum + (1 - (value % 2)) * value;
            });
    int odd_sum = std::accumulate(elements.begin(), elements.end(), 0, [](const int& sum, const int&value)
            {
                return sum + (value % 2) * value;
            });


    std::cout << "Even sum = " << even_sum << std::endl;
    std::cout << "Odd sum = " << odd_sum << std::endl;
    
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
