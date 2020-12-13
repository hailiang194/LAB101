#ifndef MAIN_FORM_HPP
    #define MAIN_FORM_HPP

#include<memory>
#include<iostream>
#include<iomanip>
#include<exception>
#include"../game-saver/loader.hpp"
#include"../object/user.hpp"
#include"../object/slot-machine.hpp"
#include"cash-out-form.hpp"
#include"save-form.hpp"
#include"play-form.hpp"
#include"input.hpp"
#include"form.hpp"

class MainForm: public Form
{
public:
    enum OPTION
    {
        PLAY_GAME = 1,
        SAVE_GAME,
        CASH_OUT,
        EXIT,
        TOTAL_OPTION = 4
    };

    MainForm();
    MainForm(const MainForm& form);
    MainForm& operator=(const MainForm& form);
    ~MainForm();
protected:
    void setup() const;
    Form::FormState update() const;
private:
    void displayMenu() const;
    std::shared_ptr<User> m_user;
    std::shared_ptr<SlotMachine> m_slot;
};

#endif //MAIN_FORM_HPP
