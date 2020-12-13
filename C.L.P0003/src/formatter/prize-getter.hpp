#ifndef PRIZE_GETTER_HPP
    #define PRIZE_GETTER_HPP

#include"../object/user.hpp"

class PrizeGetter
{
public:
    PrizeGetter();
    PrizeGetter(const PrizeGetter& getter);
    PrizeGetter& operator=(const PrizeGetter& getter);
    virtual ~PrizeGetter();

    virtual User::coin_t getPrize(std::size_t combination);

};

#endif //PRIZE_GETTER_HPP
