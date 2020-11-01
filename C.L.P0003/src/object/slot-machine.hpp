#ifndef SLOT_MACHINE_HPP
    #define SLOT_MACHINE_HPP

#define DEFAULT_DIGIT_SIZE 3

#include<cstddef>
#include<memory>
#include<exception>
#include<chrono>
#include<random>

#define MIN_DIGIT 0
#define MAX_DIGIT 9

class SlotMachine
{
public:
    typedef unsigned short digit_t;
    SlotMachine(std::size_t size = DEFAULT_DIGIT_SIZE);
    SlotMachine(const SlotMachine& machine);
    SlotMachine& operator=(const SlotMachine& machine);
    ~SlotMachine();

    const std::size_t& size() const;
    const std::size_t& size();

    const digit_t& at(std::size_t pos) const;
    const digit_t& at(std::size_t pos);

    const digit_t& operator[](std::size_t pos) const;
    const digit_t& operator[](std::size_t pos);

    void generate();
private:
    std::size_t m_size;
    std::shared_ptr<digit_t[]> m_digits;
};

inline const std::size_t& SlotMachine::size() const
{
    return m_size;
}

inline const std::size_t& SlotMachine::size()
{
    return const_cast<const std::size_t&>(static_cast<const SlotMachine&>(*this).size());
}

inline const SlotMachine::digit_t& SlotMachine::at(std::size_t pos) const
{
    if(pos >= m_size)
        throw std::out_of_range("index is out of range");

    return *(m_digits.get() + pos);
}

inline const SlotMachine::digit_t& SlotMachine::at(std::size_t pos)
{
    return const_cast<const SlotMachine::digit_t&>(static_cast<const SlotMachine&>(*this).at(pos));
}

inline const SlotMachine::digit_t& SlotMachine::operator[](std::size_t pos) const
{
    return *(m_digits.get() + pos);
}

inline const SlotMachine::digit_t& SlotMachine::operator[](std::size_t pos)
{
    return const_cast<const SlotMachine::digit_t&>(static_cast<const SlotMachine&>(*this)[pos]);
}

#endif
