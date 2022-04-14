#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(string target){
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
