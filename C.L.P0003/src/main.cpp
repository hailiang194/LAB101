#include<iostream>
#include"object/slot-machine.hpp"

int main()
{
    SlotMachine slot;
    slot.generate();
    for(std::size_t i = 0; i < slot.size(); ++i)
    {
        std::cout << slot.at(i) << std::endl;
    }
    return 0;
}
