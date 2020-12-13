#include"read-form.hpp"

ReadForm::ReadForm()
    :Form()
{

}

ReadForm::ReadForm(const ReadForm& form)
    :Form(form)
{

}

ReadForm& ReadForm::operator=(const ReadForm& form)
{
    Form::operator=(form);
    return(*this);
}

ReadForm::~ReadForm()
{

}

void ReadForm::setup() const
{

}

Form::FormState ReadForm::update() const
{
    std::string filename;
    while(true)
    {
        try
        {
            std::string prmopt = "Enter the name of file you wish to see: ";
            filename = Input::input_str(prmopt);
            break;
        }
        catch(std::exception& ex)
        {
            std::cout << "ERROR" << ex.what() << std::endl;
            std::cout << "Try again" << std::endl;
            continue;
        }
    }

    read(filename);
    return ExitForm;
}

void ReadForm::read(const std::string& filename) const
{
    std::ifstream reader;
    reader.open(filename);

    if(!reader.is_open())
    {
        std::cout << "Unable to read " << filename << std::endl;
        return;
    }

    std::string line;
    while(std::getline(reader, line))
    {
        std::cout << line << std::endl;
    }
    reader.close();
}
