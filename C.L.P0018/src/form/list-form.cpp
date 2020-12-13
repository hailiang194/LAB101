#include"list-form.hpp"

ListForm::ListForm()
    :Form()
{

}

ListForm::ListForm(const ListForm& form)
    :Form(form)
{

}

ListForm& ListForm::operator=(const ListForm& form)
{
    Form::operator=(form);
    return (*this);
}

ListForm::~ListForm()
{

}

void ListForm::setup() const
{

}

Form::FormState ListForm::update() const
{
    list();
    return ExitForm;
}

void ListForm::list() const
{
    struct dirent *child;

    DIR *currentDir = opendir(".");
    if(currentDir == NULL)
    {
        std::cout << ("Can\'t open this directory") << std::endl;
        return;
    }

    while((child = readdir(currentDir)) != NULL)
    {
        std::cout << (child -> d_name) << std::endl;
    }

    closedir(currentDir);

}
