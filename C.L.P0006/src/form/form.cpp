#include"form.hpp"

Form::Form()
{

}

Form::Form(const Form& form)
{

}

Form& Form::operator=(const Form& form)
{
    return (*this);
}

Form::~Form()
{

}

void Form::run() const
{
    setup();
    loop();
}

void Form::run()
{
    static_cast<const Form&>(*this).run();
}

void Form::setup()
{
    static_cast<const Form&>(*this).setup();
}

Form::FormState Form::update()
{
    return static_cast<const Form&>(*this).update();
}

void Form::loop() const
{
    while(update() == ContinueForm)
    {
        continue;
    }
}

void Form::loop()
{
    static_cast<const Form&>(*this).loop();
}
