#include "Form.hpp"

Form::Form() : _name("Unkown"), _sign(0), _grade_sig(0), _grade_exec(0){
    cout << "Default const called\n";
}

Form & Form::operator=(Form const &fr){
    this->_sign = fr._sign;
    return *this;
}

Form::Form(const string name, const int grade_sig, const int grade_exec) : _name(name), _sign(0), _grade_sig(grade_sig), _grade_exec(grade_exec){
    cout << "Const param called\n";
}

Form::Form(const Form &fr) : _name(fr._name), _sign(0), _grade_sig(0), _grade_exec(0){
    this->_sign = fr._sign;
}

Form::~Form(){
    cout << "Dest called\n";
}

string Form::getName()const{
    return (this->_name);
}

bool Form::getSign()const{
    return (_sign);
}

int Form::getSignGrade(void)const{
    return (this->_grade_sig);
}

int Form::getExcuteGrade()const{
    return (this->_grade_exec);
}

// void Form::setSign(bool sign){
//     this->_sign = sign;
// }

bool Form::beSigned(Bureaucrat &B){
    if(B.getGrade() <= _grade_sig)
        _sign = 1;
    B.signForm(*this);
    if (!_sign)
        throw GradeTooLowException();
    return 0;
}

const char * Form::GradeTooHighException::what() const throw(){
    return ("The Grade is to hight");
}

const char * Form::GradeTooLowException::what() const throw(){
    return ("The Grade is to low");
}

const char * Form::SignTooLowException::what() const throw(){
    return ("The form is not signed");
}

std::ostream & operator<<(std::ostream &o, Form const &fr){
    if(fr.getSign())
        o << fr.getName() << ", exec grade " << fr.getExcuteGrade() << " sign grade " <<fr.getSignGrade() << "signed.";
    else
        o << fr.getName() << ", exec grade " << fr.getExcuteGrade() << " sign grade " << fr.getSignGrade() << "not signed.";
    return o;
}

void Form::checkExecute(Bureaucrat const & executor)const{
    if(this->getExcuteGrade() >= executor.getGrade())
        throw GradeTooLowException();
    if(!this->getSign())
        throw SignTooLowException();
    this->execute(executor);
}