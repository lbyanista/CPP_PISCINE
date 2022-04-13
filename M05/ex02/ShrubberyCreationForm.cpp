#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){
    cout << "Default Const called" << ln;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    cout << "Destr called" << ln;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &SC){
    cout << "Copy Assignement operator called" << ln;
    return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &SC){
    cout << "Copy constructor called" << ln;
    *this = SC;
}