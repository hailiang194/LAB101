#ifndef DELETE_FORM_HPP
    #define DELETE_FORM_HPP

#include<iostream>
#include<string>
#include<cstdio>
#include"form.hpp"
#include"input.hpp"

class DeleteForm: public Form
{
public:
    DeleteForm();
    DeleteForm(const DeleteForm& form);
    DeleteForm operator=(const DeleteForm& form);
    ~DeleteForm();
protected:
    void setup() const;
    Form::FormState update() const;
};

#endif
