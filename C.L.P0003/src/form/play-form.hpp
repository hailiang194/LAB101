#ifndef PLAY_FORM_HPP
    #define PLAY_FORM_HPP

#include<memory>
#include<iostream>
#include<cstdlib>
#include<iomanip>
#include"form.hpp"
#include"../object/user.hpp"
#include"../object/slot-machine.hpp"
#include"../formatter/combination-getter.hpp"
#include"../formatter/prize-getter.hpp"
#include"../game-saver/saver.hpp"

#define GAME_FEE 0.25

class PlayForm: public Form
{
public:
    PlayForm(std::shared_ptr<User> user, std::shared_ptr<SlotMachine> slot);
    PlayForm(const PlayForm& form);
    PlayForm& operator=(const PlayForm& form);
    ~PlayForm();

protected:
    void setup() const;
    Form::FormState update() const;
private:
    std::shared_ptr<User> m_user;
    std::shared_ptr<SlotMachine> m_slot;
};

#endif
