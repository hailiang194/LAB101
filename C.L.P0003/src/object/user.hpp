#ifndef USER_HPP
    #define USER_HPP

#define DEFAULT_COIN 10.00
#define COIN_COMPARE_EPSILON 0.001

#include<cmath>
#include<limits>

int compare(double firstNumber, double secondNumber, double epsilon=std::numeric_limits<double>::epsilon());

class User
{
public:
    typedef double coin_t;
    User(coin_t coin=DEFAULT_COIN);
    User(const User& user);
    User operator=(const User& user);
    virtual ~User();

    const coin_t& coin() const;
    const coin_t& coin();

    const bool isEnoughCoinFor(coin_t paid) const;
    const bool isEnoughCoinFor(coin_t paid);

    void addCoin(coin_t coin);
    coin_t coinOut(); 
protected:
    coin_t m_coin;
};

inline const User::coin_t& User::coin() const
{
    return m_coin;
}

inline const User::coin_t& User::coin()
{
    return const_cast<const User::coin_t&>(static_cast<const User&>(*this).coin());
}

inline const bool User::isEnoughCoinFor(coin_t paid) const
{
    return (compare(m_coin - paid, 0.00, COIN_COMPARE_EPSILON) >= 0);
}

inline const bool User::isEnoughCoinFor(coin_t paid)
{
    return static_cast<const User&>(*this).isEnoughCoinFor(paid);
}

#endif //USER_HPP
