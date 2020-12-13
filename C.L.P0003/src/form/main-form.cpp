#include"main-form.hpp"

MainForm::MainForm()
    :Form()
{
    m_user = std::make_shared<User>();
    m_slot = std::make_shared<SlotMachine>();
}
MainForm::MainForm(const MainForm& form)
    :Form(form), m_user(form.m_user), m_slot(form.m_slot)
{
}
MainForm& MainForm::operator=(const MainForm& form)
{
    Form::operator=(form);
    m_user = form.m_user;
    m_slot = form.m_slot;
    return(*this);
}

MainForm::~MainForm()
{
}

void MainForm::displayMenu() const
{
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "You have" << m_user -> coin() << std::endl;
    std::cout << "1. Play the slot machine" << std::endl;
    std::cout << "2. Save game" << std::endl;
    std::cout << "3. Cash out" << std::endl;
    std::cout << "4. Exit" << std::endl;
}

void MainForm::setup() const
{
    GameLoader loader(*m_user);
    loader.load();
}

Form::FormState MainForm::update() const
{
    CLEAR_SCREEN;
    displayMenu();
    OPTION option = TOTAL_OPTION;
    while(true)
    {
        try
        {
            std::string prompt = ">> ";
            option = static_cast<OPTION>(Input::input(prompt, 1, TOTAL_OPTION));
            break;
        }catch(std::exception& ex)
        {
            std::cout << "ERROR: " << ex.what() << std::endl;
            std::cout << "Try again." << std::endl;
            continue;
        }
    }

    
    switch(option)
    {
        case PLAY_GAME:
            {
                PlayForm play(m_user, m_slot);
                play.run();
                break;
            }
        case SAVE_GAME:
            {
                SaveForm save(m_user);
                save.run();
                break;
            }
        case CASH_OUT:
            {
                CashOutForm cashOut(m_user);
                cashOut.run();
            }
        case EXIT:
            return ExitForm;
            break;
    }

    Input::hold();
    return ContinueForm;
}
