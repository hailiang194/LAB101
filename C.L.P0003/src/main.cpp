#include<iostream>
#include"object/slot-machine.hpp"
#include"formatter/combination-getter.hpp"
#include"object/user.hpp"
#include"formatter/prize-getter.hpp"
#include"game-saver/saver.hpp"

int main()
{
    SlotMachine slot;
    slot.generate();
    std::cout << "Combination" << std::endl;
    for(std::size_t i = 0; i < slot.size(); ++i)
    {
        std::cout << slot.at(i) << std::endl;
    }
    CombinationGetter getter;
    std::cout << "Combination Result" << std::endl;
    std::cout << getter.get(slot) << std::endl;

    User user;
    std::cout << "Init coin=";
    std::cout << user.coin() << std::endl;
    std::cout << "Able to remove 10.25 coin? " << user.isEnoughCoinFor(10.25) << std::endl;
    std::cout << "Able to remove 9.75 coin? " << user.isEnoughCoinFor(9.75) << std::endl;
    user.addCoin(20);
    
    GameSaver saver(user);
    std::cout << "Add 20 coin then " << user.coin() << std::endl;
    std::cout << "Save" << std::endl;

    saver.save();

    std::cout << "Cash out" << user.coinOut() << std::endl;
    std::cout << "Coin=" << user.coin() << std::endl;

    PrizeGetter prizeGetter;
    std::cout << "Prize=" << prizeGetter.getPrize(getter.get(slot)) << std::endl; 
    return 0;
}
