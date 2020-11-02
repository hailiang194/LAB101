#ifndef READ_FORM_HPP
    #define READ_FORM_HPP

#include<iostream>
#include<fstream>
#include<string>
#include"form.hpp"
#include"input.hpp"


class ReadForm: public Form
{
public:
    ReadForm();
    ReadForm(const ReadForm& form);
    ReadForm& operator=(const ReadForm& form);
    ~ReadForm();
protected:
    void setup() const;
    Form::FormState update() const;
private:
    void read(const std::string& filename) const;
};

#endif //READ_FORM_HPP
