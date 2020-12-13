#include"combination-getter.hpp"

CombinationGetter::CombinationGetter()
{

}

CombinationGetter::CombinationGetter(const CombinationGetter& getter)
{

}

CombinationGetter& CombinationGetter::operator=(const CombinationGetter& getter)
{
    return (*this);
}

CombinationGetter::~CombinationGetter()
{

}

std::size_t CombinationGetter::get(const SlotMachine& machine)
{
    std::array<std::size_t, MAX_DIGIT - MIN_DIGIT + 1> frequencies = {0};
    for(std::size_t i = 0; i < machine.size(); ++i)
    {
        ++frequencies[machine.at(i) - MIN_DIGIT];
    }

    std::size_t maxCombination = frequencies[0];

    for(std::size_t& frequency: frequencies)
    {
        if(maxCombination < frequency)
            maxCombination = frequency;
    }

    return maxCombination;
}
