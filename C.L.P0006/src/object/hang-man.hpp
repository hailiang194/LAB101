#ifndef HANG_MAN_HPP
    #define HANG_MAN_HPP

#define TOTAL_ALPHABET 26
#define HIDDEN_CHAR '*'
#define MAP_TO_GUESS(c) (toupper(c) - 'A')

#include<string>
#include<array>
#include<cctype>
#include"user.hpp"

class HangMan
{
public:
    HangMan(const std::string& word, User& user);
    HangMan(const HangMan& hangman);
    HangMan& operator=(const HangMan& hangman);
    ~HangMan();

    const std::string& hiddenWord() const;
    const std::string& hiddenWord();

    const bool hasGuessed(const char& guess) const;
    const bool hasGuessed(const char& guess);

    const std::string word() const;
    const std::string word();

    const bool guess(const char& guess);

    const bool isComplete() const;
    const bool isComplete();

    const bool isGameOver() const;
    const bool isGameOver();
private:
    std::string m_word;
    User& m_user;
    std::array<bool, TOTAL_ALPHABET> m_guessed;
};


inline const std::string& HangMan::hiddenWord() const
{
    return m_word;
}

inline const std::string& HangMan::hiddenWord()
{
    return const_cast<const std::string&>(static_cast<const HangMan>(*this).hiddenWord());
}

inline const bool HangMan::hasGuessed(const char& guess) const
{
    if(!isalpha(guess))
        return false;

    
    return m_guessed[toupper(guess) - 'A'];
}

inline const bool HangMan::hasGuessed(const char& guess)
{
    return (static_cast<const HangMan&>(*this).hasGuessed(guess));
}

#endif
