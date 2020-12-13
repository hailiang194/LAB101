#ifndef COMBINATION_GETTER
    #define COMBINATION_GETTER

#include<array>
#include<cstddef>
#include"../object/slot-machine.hpp"

class CombinationGetter
{
public:
    CombinationGetter();
    CombinationGetter(const CombinationGetter& getter);
    CombinationGetter& operator=(const CombinationGetter& getter);
    virtual ~CombinationGetter();

    std::size_t get(const SlotMachine& machine);
};

#endif
