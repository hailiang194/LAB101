#include"merge-form.hpp"

MergeForm::MergeForm()
    :Form()
{

}

MergeForm::MergeForm(const MergeForm& form)
    :Form(form)
{

}

MergeForm& MergeForm::operator=(const MergeForm& form)
{
    Form::operator=(form);
    return(*this);
}

MergeForm::~MergeForm()
{

}

void MergeForm::setup() const
{

}

Form::FormState MergeForm::update() const
{
    std::string src1;
    while(true)
    {
        try
        {
            std::string prompt = "Enter name of first file: ";
            src1 = Input::input_str(prompt);
            break;
        }
        catch(std::exception& ex)
        {
            std::cout << "ERROR: " << ex.what() << std::endl;
            std::cout << "Try again" << std::endl;
            continue;
        }
    }

    std::string src2;
    while(true)
    {
        try
        {
            std::string prompt = "Enter name of second file: ";
            src2 = Input::input_str(prompt);
            break;
        }
        catch(std::exception& ex)
        {
            std::cout << "ERROR: " << ex.what() << std::endl;
            std::cout << "Try again" << std::endl;
            continue;
        }
    }

    std::string des;
    while(true)
    {
        try
        {
            std::string prompt = "Enter name of destination file: ";
            des = Input::input_str(prompt);
            break;
        }
        catch(std::exception& ex)
        {
            std::cout << "ERROR: " << ex.what() << std::endl;
            std::cout << "Try again" << std::endl;
            continue;
        }
    }

    merge(src1, src2, des);

    return ExitForm;
}

void MergeForm::merge(const std::string& src1, const std::string& src2, const std::string& des) const
{
    std::ofstream writer;
    writer.open(des);

    std::ifstream reader1;
    reader1.open(src1);

    if(!reader1.is_open())
    {
        std::cout << "Unable to read" << src1 << std::endl;
        std::cout << "Try again" << std::endl;
        return;
    }

    char buffer = 0;
    while(reader1.get(buffer))
    {
        writer << buffer;
    }


    reader1.close();

    std::ifstream reader2;
    reader2.open(src2);

    if(!reader2.is_open())
    {
        std::cout << "Unable to read" << src1 << std::endl;
        std::cout << "Try again" << std::endl;
        return;
    }

    while(reader2.get(buffer))
    {
        writer << buffer;
    }

    reader2.close();

    writer.close();

    std::cout << "Merge completed" << std::endl;
}
