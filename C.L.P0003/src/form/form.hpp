#ifndef FORM_HPP
    #define FORM_HPP

#define CLEAR_SCREEN std::cout << "\033[2J\033[H"

class Form
{
public:
    enum FormState
    {
        ExitForm,
        ContinueForm
    };
    Form();
    Form(const Form& form);
    Form& operator=(const Form& form);
    virtual ~Form();
    
    void run() const;
    void run();
protected:
    virtual void setup() const = 0;
    void setup();
    
    virtual FormState update() const = 0;
    FormState update();

    void loop() const;
    void loop();
};

#endif //FORM_HPP
