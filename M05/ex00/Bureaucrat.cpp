#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    cout << "Default Constructor called\n";
}

Bureaucrat::~Bureaucrat(){
    cout << "Desstructor called\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const &br){
    cout << "Copy constructor called\n";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &br){
    cout << "Copy Assignement operator called\n";
}