#ifndef RANDOM_WORD_GETTER_HPP
    #define RANDOM_WORD_GETTER_HPP

#include"../file-process/word-getter.hpp"
#include<random>
#include<chrono>

class RandomWordGetter
{
public:
    RandomWordGetter(const WordGetter& getter);
    RandomWordGetter(const RandomWordGetter& getter);
    RandomWordGetter& operator=(const RandomWordGetter& getter);
    ~RandomWordGetter();

    const std::string& get() const;
    const std::string& get();
private:
    const WordGetter& m_getter;
};

#endif
