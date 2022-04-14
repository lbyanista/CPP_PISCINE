#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(string target) : Form("PresidentialPardonForm", 25, 5){
    cout << "Destr PP called" << ln;
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &PP){
    cout << "Copy constructor PP called" << ln;
    *this = PP;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &PP){
    cout << "Copy Assignement operator PP called" << ln;
    this->_target = PP._target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    cout << "Destr PP called" << ln;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)const{
    if(!this->getSign()){
        throw Form::SignTooLowException();
    }
    if(executor.getGrade() > this->getExcuteGrade()){
        throw Form::GradeTooLowException();
    }

    ...
}
