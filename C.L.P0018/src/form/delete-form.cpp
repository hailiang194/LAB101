#include"delete-form.hpp"

DeleteForm::DeleteForm()
    :Form()
{
    
}

DeleteForm::DeleteForm(const DeleteForm& form)
    :Form(form)
{

}

DeleteForm DeleteForm::operator=(const DeleteForm& form)
{
    Form::operator=(form);
    return(*this);
}

DeleteForm::~DeleteForm()
{

}

void DeleteForm::setup() const
{
    
}

Form::FormState DeleteForm::update() const
{
    std::string filename;
    while(true)
    {
        try
        {
            std::string prompt = "Enter name of file you wish to delete: ";
            filename = Input::input_str(prompt);
            break;
        }
        catch(std::exception& ex)
        {
            std::cout << "ERROR: " << ex.what() << std::endl;
            std::cout << "Try again" << std::endl;
            continue;
        }
    }

    if(std::remove(filename.c_str()) == 0)
    {
        std::cout << "Delete completed" << std::endl;
    }
    else
    {
        std::cout << "Error occurs" << std::endl;
    }
    return ExitForm;
}
