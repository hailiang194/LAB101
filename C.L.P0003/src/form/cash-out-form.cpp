#include"cash-out-form.hpp"

CashOutForm::CashOutForm(std::shared_ptr<User> user)
    :Form(), m_user(user)
{

}

CashOutForm::CashOutForm(const CashOutForm& form)
    :Form(form), m_user(form.m_user)
{

}

CashOutForm& CashOutForm::operator=(const CashOutForm& form)
{
    Form::operator=(form);
    m_user = form.m_user;
    return(*this);
}

CashOutForm::~CashOutForm()
{

}

void CashOutForm::setup() const
{

}

Form::FormState CashOutForm::update() const
{
    std::cout << "Thank you for playing! You end with " << std::fixed << std::setprecision(2);
    std::cout << m_user -> coinOut() << std::endl;

    std::remove(DEFAULT_SAVE_PATH);
    std::exit(0);

    return ExitForm;
}
