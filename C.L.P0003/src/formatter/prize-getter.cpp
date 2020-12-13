#include"prize-getter.hpp"

PrizeGetter::PrizeGetter()
{

}

PrizeGetter::PrizeGetter(const PrizeGetter& getter)
{

}

PrizeGetter& PrizeGetter::operator=(const PrizeGetter& getter)
{
    return (*this);
}

PrizeGetter::~PrizeGetter()
{

}

User::coin_t PrizeGetter::getPrize(std::size_t combination)
{
    switch(combination)
    {
        case 0:
            return 0.00;
            break;
        case 1:
            return 0.00;
            break;
        case 2:
            return 0.50;
            break;
        case 3:
            return 10.00;
            break;
    }

    return 0.00;
}
