#include"save-form.hpp"

SaveForm::SaveForm(std::shared_ptr<User> user)
    :Form(), m_user(user)
{

}

SaveForm::SaveForm(const SaveForm& form)
    :Form(form), m_user(form.m_user)
{

}

SaveForm& SaveForm::operator=(const SaveForm& form)
{
    Form::operator=(form);
    m_user = form.m_user;

    return(*this);
}

SaveForm::~SaveForm()
{

}

void SaveForm::setup() const
{

}

Form::FormState SaveForm::update() const
{
    GameSaver saver(*m_user);
    saver.save();

    std::cout << "Your money has been saved" << std::endl;
    return ExitForm;
}
