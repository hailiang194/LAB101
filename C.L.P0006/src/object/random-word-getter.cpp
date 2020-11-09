#include"random-word-getter.hpp"

RandomWordGetter::RandomWordGetter(const WordGetter& getter)
    :m_getter(getter)
{

}

RandomWordGetter::RandomWordGetter(const RandomWordGetter& getter)
    :m_getter(getter.m_getter)
{

}

RandomWordGetter RandomWordGetter::operator=(const RandomWordGetter& getter)
{
    (*this) = RandomWordGetter(getter);
    return(*this);
}

RandomWordGetter::~RandomWordGetter()
{

}

const std::string& RandomWordGetter::get() const
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    std::minstd_rand0 generator(seed);

    std::uniform_int_distribution<int> distribution(0, m_getter.size() - 1);

    return m_getter.at(distribution(generator));
}

const std::string& RandomWordGetter::get()
{
    return const_cast<const std::string&>(static_cast<const RandomWordGetter&>(*this).get());
}
