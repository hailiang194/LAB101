#include"copy-form.hpp"

CopyForm::CopyForm()
    :Form()
{

}

CopyForm::CopyForm(const CopyForm& form)
    :Form(form)
{

}

CopyForm& CopyForm::operator=(const CopyForm& form)
{
    Form::operator=(form);
    return(*this);
}

CopyForm::~CopyForm()
{

}

void CopyForm::setup() const
{

}

Form::FormState CopyForm::update() const
{
    std::string src;
    while(true)
    {
        try
        {
            std::string prompt = "Enter name of file to copy: ";
            src = Input::input_str(prompt);
            break;
        }
        catch(std::exception& ex)
        {
            std::cout << "ERROR" << ex.what() << std::endl;
            std::cout << "Try again" << std::endl;
            continue;
        }
    }

    std::string des;
    while(true)
    {
        try
        {
            std::string prompt = "Enter name of target file: ";
            des = Input::input_str(prompt);
            break;
        }
        catch(std::exception& ex)
        {
            std::cout << "ERROR" << ex.what() << std::endl;
            std::cout << "Try again" << std::endl;
            continue;
        }
    }

    copy(src, des);
    return ExitForm;
}

void CopyForm::copy(const std::string& src, std::string& des) const
{
    std::ifstream reader;
    reader.open(src);

    if(!reader.is_open())
    {
        std::cout << "Unable to read " << src << std::endl;
        std::cout << "Try again" << std::endl;
    }

    std::ofstream writer;
    writer.open(des);

    

    char buffer = 0;
    while(reader.get(buffer))
    {
        writer << buffer;
    }


    writer.close();
    reader.close();
}
