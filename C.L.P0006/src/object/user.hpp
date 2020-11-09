#ifndef USER_HPP
    #define USER_HPP

#include<cstddef>

#define DEFAULT_LIFE_POINT 5

class User
{
public:
    typedef std::size_t life_t;
    User(life_t life = DEFAULT_LIFE_POINT);
    User(const User& user);
    User& operator=(const User& user);
    ~User();

    const bool isGameOver() const;
    const bool isGameOver();

    const life_t& life() const;
    const life_t& life();

    const bool miss();
private:
    life_t m_life;
};

inline const bool User::isGameOver() const
{
    return (m_life == 0);
}

inline const bool User::isGameOver()
{
    return static_cast<const User&>(*this).isGameOver();
}

inline const User::life_t& User::life() const
{
    return m_life;
}

inline const User::life_t& User::life()
{
    return const_cast<const User::life_t&>(static_cast<const User&>(*this).life());
}

#endif //USER_HPP
