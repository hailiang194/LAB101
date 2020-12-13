#include"./slot-machine.hpp"

SlotMachine::SlotMachine(std::size_t size)
{
    m_size = size;
    m_digits = std::make_shared<SlotMachine::digit_t[]>(m_size);

    for(std::size_t i = 0; i < m_size; ++i)
    {
        *(m_digits.get() + i) = MIN_DIGIT;
    }
}

SlotMachine::SlotMachine(const SlotMachine& machine)
    :m_size(machine.m_size), m_digits(machine.m_digits)
{

}

SlotMachine& SlotMachine::operator=(const SlotMachine& machine)
{
    m_size = machine.m_size;
    m_digits = machine.m_digits;

    return (*this);
}

SlotMachine::~SlotMachine()
{

}

void SlotMachine::generate()
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    std::minstd_rand0 generator(seed);

    std::uniform_int_distribution<int> distribution(MIN_DIGIT, MAX_DIGIT);

    for(std::size_t i = 0; i < m_size; ++i)
    {
        *(m_digits.get() + i) = distribution(generator);
    }
}
