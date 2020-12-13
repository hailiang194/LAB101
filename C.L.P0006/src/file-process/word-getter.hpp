#ifndef WORD_GETTER_HPP
    #define WORD_GETTER_HPP

#include<fstream>
#include<vector>
#include<memory>
#include<exception>

#define HANGMAN_DATABASE "../hangman.txt"

class WordGetter
{
public:
    WordGetter();
    WordGetter(const WordGetter& getter);
    WordGetter& operator=(const WordGetter& getter); 
   ~WordGetter();

    const std::size_t size() const;
    const std::size_t size();

    const std::string& at(std::size_t pos) const;
    const std::string& at(std::size_t pos);

    const std::string& operator[](std::size_t pos) const;
    const std::string& operator[](std::size_t pos);

//protected:
protected:
    std::vector<std::string> m_words;
    void read_file();
};


#endif
