#ifndef SAVE_FORM_HPP
    #define SAVE_FORM_HPP

#include<memory>
#include<iostream>
#include"../object/user.hpp"
#include"../game-saver/saver.hpp"
#include"form.hpp"

class SaveForm: public Form
{
public:
    SaveForm(std::shared_ptr<User> user);
    SaveForm(const SaveForm& form);
    SaveForm& operator=(const SaveForm& form);
    ~SaveForm();
protected:
    void setup() const;
    Form::FormState update() const;
private:
    std::shared_ptr<User> m_user;
};

#endif //SAVE_FORM_HPP
