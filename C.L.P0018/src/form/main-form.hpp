#ifndef MAIN_FORM_HPP
    #define MAIN_FORM_HPP

#include<iostream>
#include"form.hpp"
#include"read-form.hpp"
#include"copy-form.hpp"
#include"input.hpp"

class MainForm: public Form
{
public:
    enum OPTION 
    {
        READ_FILE = 1,
        COPY_FILE,
        MERGE_TWO_FILES,
        LIST_FILES,
        DELETE_FILE,
        EXIT,
        TOTAL_OPTION = 6
    };
    MainForm();
    MainForm(const MainForm& form);
    MainForm operator=(const MainForm& form);
    ~MainForm();
protected:
    void setup() const;
    Form::FormState update() const;
private:
    void displayMenu() const;
};

#endif //MAIN_FORM_HPP
