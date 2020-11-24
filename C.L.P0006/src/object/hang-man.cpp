#include"./hang-man.hpp"

HangMan::HangMan(const std::string& word,User& user)
    :m_word(word), m_user(user)
{
    for(std::size_t i = 0; i < m_guessed.size(); ++i)
    {
        m_guessed[i] = 0;
    }
}

HangMan::HangMan(const HangMan& hangman)
    :m_word(hangman.m_word), m_user(hangman.m_user), m_guessed(hangman.m_guessed)
{

}

HangMan& HangMan::operator=(const HangMan& hangman)
{
    m_word = hangman.m_word;
    m_user = hangman.m_user;
    m_guessed = hangman.m_guessed;

    return(*this);
}

HangMan::~HangMan()
{

}

const std::string HangMan::word() const
{
    std::string word;

    for(std::size_t i = 0; i < m_word.length(); ++i)
    {
        if(!isalpha(m_word[i]))
        {
            word = word + m_word[i];
            continue;
        }
        
        word = word + (!m_guessed[MAP_TO_GUESS(m_word[i])] ? HIDDEN_CHAR : m_word[i]);

    }

    return word;
}

const std::string HangMan::word()
{
    return static_cast<const HangMan&>(*this).word();
}

const bool HangMan::guess(const char& guess)
{
    if(!isalpha(guess) || m_guessed[MAP_TO_GUESS(guess)])
        return false;

    m_guessed[MAP_TO_GUESS(guess)] = true;

    std::size_t upperPos = m_word.find_first_of(toupper(guess));

    std::size_t lowerPos = m_word.find_first_of(tolower(guess));

    if(upperPos == std::string::npos && lowerPos == std::string::npos)
    {
        m_user.miss();
        return false;
    }

    return true;
}

const bool HangMan::isComplete() const
{
    for(std::size_t i = 0; i < m_word.length(); ++i)
    {
        if(!isalpha(m_word[i]))
            continue;

        if(!m_guessed[MAP_TO_GUESS(m_word[i])])
            return false;
    }

    return true;
}

const bool HangMan::isComplete()
{
    return static_cast<const HangMan&>(*this).isComplete();
}

const bool HangMan::isGameOver() const
{
    return m_user.isGameOver();
}

const bool HangMan::isGameOver()
{
    return static_cast<const HangMan&>(*this).isGameOver();
}
