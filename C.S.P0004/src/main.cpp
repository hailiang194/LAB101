#include<iostream>
#include<array>
#include<string>
#include<cctype>
#include<algorithm>

#define ALL_FREQUENCE -1
#define TOTAL_LETTER 26
#define FREQUENCE_MAPPING(chr) (toupper(chr) - 'A')

std::string trim(const std::string& original);
std::string input(const std::string& prompt);
char input_chr(const std::string& prompt);
std::array<std::size_t, TOTAL_LETTER> getFrequences(const std::string& str);
void displayFrequence(const std::array<std::size_t, TOTAL_LETTER>& letters, const std::size_t frequence = ALL_FREQUENCE);

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

        std::array<std::size_t, TOTAL_LETTER> letters = getFrequences(str);
        std::cout << "Time of appearance for each characters: " << std::endl;
        displayFrequence(letters);
        
        std::size_t maxElement = *std::max_element(letters.begin(), letters.end());

        std::cout << maxElement << std::endl;
        std::cout << "Character(s) appear the most: " << std::endl;
        displayFrequence(letters, maxElement);

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

std::array<std::size_t, TOTAL_LETTER> getFrequences(const std::string& str)
{
    std::array<std::size_t, TOTAL_LETTER> letters;

    for(std::size_t& letter: letters)
    {
        letter = 0;
    }

    for(std::size_t i = 0; i < str.length(); ++i)
    {
        if(!isalpha(str[i]))
            continue;

        ++letters[FREQUENCE_MAPPING(str[i])];
    }

    return letters;
}

void displayFrequence(const std::array<std::size_t, TOTAL_LETTER>& letters,const std::size_t frequence)
{
    for(char c = 'A'; c <= 'Z'; ++c)
    {
        if((frequence == ALL_FREQUENCE) || (letters[FREQUENCE_MAPPING(c)] == frequence))
        {
            std::cout << c << ": " << letters[FREQUENCE_MAPPING(c)] << std::endl;
    
        }
       
    }
}
