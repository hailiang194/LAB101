#ifndef MAIN_FORM_HPP
    #define MAIN_FORM_HPP

#include<iostream>
#include<memory>
#include"form.hpp"
#include"input.hpp"
#include"../file-process/word-getter.hpp"
#include"../object/hang-man.hpp"
#include"../object/random-word-getter.hpp"
#include"../object/user.hpp"

class MainForm: public Form
{
public:
    MainForm();
    MainForm(const MainForm& form);
    MainForm& operator=(const MainForm& form);
    ~MainForm();
protected:
    void setup() const;
    Form::FormState update() const;
private:
    std::shared_ptr<WordGetter> m_getter;
};

#endif
