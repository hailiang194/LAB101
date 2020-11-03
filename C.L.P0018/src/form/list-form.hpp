#ifndef LIST_FORM_HPP
    #define LIST_FORM_HPP

#include<dirent.h>
#include<iostream>
#include"form.hpp"

class ListForm: public Form
{
public:
    ListForm();
    ListForm(const ListForm& form);
    ListForm& operator=(const ListForm& form);
    ~ListForm();
protected:
    void setup() const;
    Form::FormState update() const;
private:
    void list() const;
};

#endif
