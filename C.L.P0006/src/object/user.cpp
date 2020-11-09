#include"user.hpp"

User::User(User::life_t life)
    :m_life(life)
{
    
}

User::User(const User& user)
    :m_life(user.m_life)
{

}

User& User::operator=(const User& user)
{
    m_life = user.m_life;
    return(*this);
}

User::~User()
{

}

const bool User::miss()
{
    if(isGameOver())
        return false;

    --m_life;
    return true;
}
