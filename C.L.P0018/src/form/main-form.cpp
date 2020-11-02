#include"main-form.hpp"

MainForm::MainForm()
    :Form()
{

}

MainForm::MainForm(const MainForm& form)
    :Form(form)
{

}

MainForm MainForm::operator=(const MainForm& form)
{
    Form::operator=(form);
    return(*this);
}

MainForm::~MainForm()
{

}

void MainForm::setup() const
{
}

Form::FormState MainForm::update() const
{
    CLEAR_SCREEN;
    displayMenu();

    int option = 0;

    while(true)
    {
        try
        {
            std::string prompt = ">> ";
            option = Input::input(prompt, 1, TOTAL_OPTION);
            break;
        }catch(std::exception& ex)
        {
            std::cout << "ERROR " << ex.what() << std::endl;
            std::cout << "Try again" << std::endl;
        }
    }

    switch(static_cast<OPTION>(option))
    {
        case READ_FILE:
            {
                ReadForm form;
                form.run();
                break;
            }
        case COPY_FILE:
            {
                CopyForm form;
                form.run();
                break;
            }
        case MERGE_TWO_FILES:
            break;
        case LIST_FILES:
            break;
        case DELETE_FILE:
            break;
        case EXIT:
            return ExitForm;
            break;
    }
    
    Input::hold();
    return ContinueForm;
}

void MainForm::displayMenu() const
{
    std::cout << "1. Read file" << std::endl;
    std::cout << "2. Copy file" << std::endl;
    std::cout << "3. Merge two filie" << std::endl;
    std::cout << "4. List files in a directory" << std::endl;
    std::cout << "5. Delete file" << std::endl;
    std::cout << "6. Exit" << std::endl;
}
