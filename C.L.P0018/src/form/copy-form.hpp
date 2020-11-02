#ifndef COPY_FORM_HPP
    #define COPY_FORM_HPP

#include<iostream>
#include<string>
#include<fstream>
#include"form.hpp"
#include"input.hpp"

class CopyForm: public Form
{
public:
    CopyForm();
    CopyForm(const CopyForm& form);
    CopyForm& operator=(const CopyForm& form);
    ~CopyForm();
protected:
    void setup() const;
    Form::FormState update() const;
private:
    void copy(const std::string& src, std::string& des) const;
};

#endif //COPY_FORM_HPP
