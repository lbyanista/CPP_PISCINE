#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Noone"), _grade(1){
    cout << "Default Constructor called\n";
}

Bureaucrat::Bureaucrat(string name, int grade) : _name(name){
    cout << "Constructor Param called\n";
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        this->_grade = grade;
}

Bureaucrat::~Bureaucrat(){
    cout << "Desstructor called\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const &br){
    cout << "Copy constructor called\n";
    *this = br;
}

const string & Bureaucrat::getName() const {
    return (this->_name);
}

const int  & Bureaucrat::getGrade() const {
    return (this->_grade);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &br){
    cout << "Copy Assignement operator called\n";
    this->_grade = br._grade;
    return (*this);
}

void    Bureaucrat::incGrade(void){
    if (_grade == 1)
        throw GradeTooHighException();
    else
        this->_grade--;
}

void    Bureaucrat::decGrade(void){
    if (_grade == 150)
        throw GradeTooLowException();
    else
        this->_grade++;
}

const char * Bureaucrat::GradeTooHighException::what() const throw(){
    return ("The grade is too high");
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){
    return ("The grade is too low");
}

std::ostream & operator<<(std::ostream & o, const Bureaucrat &br){
    o << br.getName() << ", bureaucrat grade " << br.getGrade() << ".";
    return(o);
}
