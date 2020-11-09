#include"word-getter.hpp"

WordGetter::WordGetter()
{
    read_file();
}

WordGetter::WordGetter(const WordGetter& getter)
    :m_words(getter.m_words)
{

}
WordGetter& WordGetter::operator=(const WordGetter& getter)
{
    m_words = getter.m_words;
    return (*this);
}

WordGetter::~WordGetter()
{

}
 
const std::size_t WordGetter::size() const
{
    return m_words.size(); 
}

const std::size_t WordGetter::size()
{
    return static_cast<const WordGetter&>(*this).size();
}

const std::string& WordGetter::at(std::size_t pos) const
{
    if(pos >= size())
        throw std::out_of_range("Out of range");

    return m_words.at(pos);
}

const std::string& WordGetter::at(std::size_t pos)
{
    return const_cast<const std::string&>(static_cast<const WordGetter&>(*this).at(pos));
}

const std::string& WordGetter::operator[](std::size_t pos) const
{
    return m_words[pos];
}

const std::string& WordGetter::operator[](std::size_t pos)
{
    return const_cast<const std::string&>(static_cast<const WordGetter&>(*this)[pos]);
}


void WordGetter::read_file()
{
    std::ifstream reader;
    reader.open(HANGMAN_DATABASE);

    if(!reader.is_open())
        return;

    std::string word;

    while(std::getline(reader, word))
    {
        m_words.push_back(word);
    }

    reader.close();
}


