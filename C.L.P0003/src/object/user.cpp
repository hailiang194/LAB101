#include"user.hpp"

int compare(double firstNumber, double secondNumber, double epsilon)
{
    double difference = std::fabs(firstNumber - secondNumber);

    if(difference < epsilon)
        return 0;
    else if(firstNumber > secondNumber)
        return 1;
    else 
        return -1;
}

User::User(coin_t coin)
    :m_coin(coin)
{

}
User::User(const User& user)
    :m_coin(user.m_coin)
{

}

User User::operator=(const User& user)
{
    m_coin = user.m_coin;
    return(*this);
}

User::~User()
{

}

void User::addCoin(User::coin_t coin)
{
    m_coin += coin;
}

User::coin_t User::coinOut()
{
    User::coin_t oldCoin = m_coin;
    m_coin = 0;
    return oldCoin;
}
