#ifndef MERGE_FORM_HPP
    #define MERGE_FORM_HPP

#include<iostream>
#include<fstream>
#include<string>
#include"input.hpp"
#include"form.hpp"

class MergeForm: public Form
{
public:
    MergeForm();
    MergeForm(const MergeForm& form);
    MergeForm& operator=(const MergeForm& form);
    ~MergeForm();
protected:
    void setup() const;
    Form::FormState update() const;
private:
    void merge(const std::string& src1, const std::string& src2, const std::string& des) const;
};

#endif //MERGE_FORM_HPP
