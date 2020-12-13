#include<iostream>
#include<string>
#include<sstream>
#include<cctype>
#include<algorithm>


std::string trim(const std::string& original);
std::string input(const std::string& prompt);
char input_chr(const std::string& prompt);

void reverse(const std::string& src, std::string& des, const int& pos);

int main()
{
    while(true)
    {
        std::string str;
        while(true)
        {
            try
            {
                str = input("Enter the string: ");
                break;
            }
            catch(std::exception& ex)
            {
                std::cout << "ERROR: " << ex.what() << std::endl;
                std::cout << "Try again" << std::endl;
                continue;
            }
        }

        std::string reversed;

        reverse(str, reversed, str.length() - 1);

        std::cout << reversed << std::endl;

        char option = '\0';

        while(true)
        {
            try
            {
                option = input_chr("Do you want to continue?(y/n)");
                if(toupper(option) != 'Y' && toupper(option) != 'N')
                {
                    std::cout << "Invalid input" << std::endl;
                    std::cout << "Try again" << std::endl;
                    continue;
                }
                
                break;
            }
            catch(std::exception& ex)
            {
                std::cout << "ERROR: " << ex.what() << std::endl;
                std::cout << "Try again" << std::endl;
            }
        }

        if(toupper(option) == 'N')
        {
            return 0;
        }
        else if(toupper(option) == 'Y')
        {
            continue;
        }
    }
        
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

std::string input(const std::string& prompt)
{
    std::cout << prompt;
    std::string line;
    getline(std::cin, line);
    return line;
}

char input_chr(const std::string& prompt)
{
    std::string inputed = trim(input(prompt));

    if(inputed.length() > 1)
        throw std::overflow_error("Invalid input: More than one character");

    return inputed[0];
}


void reverse(const std::string& src, std::string& des, const int& pos)
{
    if(pos == -1)
        return;

    des += src[pos];

    reverse(src, des, pos - 1);
}
