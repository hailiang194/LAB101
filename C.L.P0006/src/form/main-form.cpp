#include"main-form.hpp"

MainForm::MainForm()
    :Form()
{
    m_getter = std::make_shared<WordGetter>();
}

MainForm::MainForm(const MainForm& form)
    :Form(form), m_getter(form.m_getter)
{

}

MainForm& MainForm::operator=(const MainForm& form)
{
    Form::operator=(form);
    m_getter = form.m_getter;
    return(*this);
}

MainForm::~MainForm()
{

}

void MainForm::setup() const
{
    for(std::size_t i = 0; i < m_getter->size(); ++i)
    {
        std::cout << m_getter->at(i) << std::endl;
    }
}

Form::FormState MainForm::update() const
{
    std::string option;

    while(true)
    {
        try
        {
            std::string prompt = "Do you want to play this game(yes/no)? ";
            option = Input::input_str(prompt);
        
            if(Input::compare_ignore_case(option, "no") == 0)
            {
                std::cout << "See you" << std::endl;
                return ExitForm;
            }
            else if(Input::compare_ignore_case(option, "yes") == 0)
            {
                break;
            }
            else
            {
                std::cout << "Invalid input" << std::endl;
                std::cout << "Try again" << std::endl;
                continue;
            }
            break;
        }
        catch(std::exception& ex)
        {
            std::cout << "ERROR: " << ex.what() << std::endl;
            std::cout << "Try again" << std::endl;
            continue;
        }
    }

    CLEAR_SCREEN;
    RandomWordGetter randomGetter(*m_getter);
    std::string word = randomGetter.get();

    User user;
    HangMan hangman(word, user);

    while(!hangman.isComplete() && !hangman.isGameOver())
    {
        //display information
        std::cout << "life point: " << user.life() << std::endl;
        std::cout << "word: " << hangman.word() << std::endl;
        std::cout << "Unchosen letter(s): " << std::endl;

        for(char alpha = 'A'; alpha <= 'Z'; ++alpha)
        {
            std::cout << (hangman.hasGuessed(alpha) ? ' ' : alpha) << " "; 
        }
        std::cout << std::endl;

        //choose letter
        char choosen = '\0';
        while(true)
        {
            try
            {
                std::string prompt = "Enter choosen: ";
                choosen = Input::input_chr(prompt);
                break;
            }
            catch(std::exception& ex)
            {
                std::cout << "ERROR" << ex.what() << std::endl;
                std::cout << "Try again" << std::endl;
                continue;
            }
        }
        
        //execute
        CLEAR_SCREEN;
        if(hangman.hasGuessed(choosen))
        {
            std::cout << "This word has been choosen" << std::endl;
        }
        else
        {
            hangman.guess(choosen);
        }
    }

    //display result
    if(hangman.isComplete())
    {
        std::cout << "Congratulation! You has guessed this word" << std::endl;
        std::cout << "This word is " << hangman.hiddenWord() << std::endl;
    }
    else if(hangman.isGameOver())
    {
        std::cout << "Sorry! You can\'t guess this word" << std::endl;
        std::cout << "The hidden word is " << hangman.hiddenWord() << std::endl;
    }

    return ContinueForm;
}
