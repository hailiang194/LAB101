#ifndef CASH_OUT_FORM_HPP
    #define CASH_OUT_FORM_HPP

#include<memory>
#include<iostream>
#include<cstdio>
#include<iomanip>
#include"../game-saver/default.hpp"
#include"form.hpp"
#include"../object/user.hpp"

class CashOutForm: public Form
{
public:
    CashOutForm(std::shared_ptr<User> user);
    CashOutForm(const CashOutForm& form);
    CashOutForm& operator=(const CashOutForm& form);
    ~CashOutForm();
protected:
    void setup() const;
    Form::FormState update() const;
private:
    std::shared_ptr<User> m_user;
};

#endif //CASH_OUT_FORM_HPP
