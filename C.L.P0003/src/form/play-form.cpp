#include"play-form.hpp"

PlayForm::PlayForm(std::shared_ptr<User> user, std::shared_ptr<SlotMachine> slot)
    :Form(), m_user(user), m_slot(slot)
{
    
}

PlayForm::PlayForm(const PlayForm& form)
    :Form(form), m_user(form.m_user), m_slot(form.m_slot)
{
    
}

PlayForm& PlayForm::operator=(const PlayForm& form)
{
    Form::operator=(form);
    m_user = form.m_user;
    m_slot = form.m_slot;
    return(*this);
}
PlayForm::~PlayForm()
{

}

void PlayForm::setup() const
{
    if(!m_user->isEnoughCoinFor(GAME_FEE))
    {
        std::cout << "No money, no honey" << std::endl;
        std::cout << "See ya" << std::endl;
        std::exit(0);
    }

    m_user->addCoin(-GAME_FEE);
}

Form::FormState PlayForm::update() const
{
    m_slot->generate();
    std::cout << "The slot machine show ";
    for(std::size_t i = 0; i < m_slot->size(); ++i)
    {
        std::cout << m_slot->at(i) << " ";
    }
    std::cout << std::endl;

    CombinationGetter getter;
    PrizeGetter prizeGetter;

    User::coin_t prize = prizeGetter.getPrize(getter.get(*m_slot));
    std::cout << "Your prize is " << std::fixed << std::setprecision(2) << prize << std::endl;

    m_user->addCoin(prize);
    GameSaver saver(*m_user);
    saver.save();
    return ExitForm;
}
