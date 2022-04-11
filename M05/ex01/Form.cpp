#include "Form.hpp"

Form::Form() : _sign(0), _grade_sig(0), _grade_exec(0){
    cout << "Default const called\n";
}

Form & Form::operator=(Form const &fr){
    this->_sign = fr._sign;
    return *this;
}

Form::Form(const string name, const int grade_sig, const int grade_exec) : _name(name), _sign(0), _grade_exec(grade_exec), _grade_sig(grade_sig){
    cout << "Const param called\n";
}

Form::Form(const Form &fr) : _sign(0), _grade_exec(0), _grade_sig(0){
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

void Form::setSign(bool sign){
    this->_sign = sign;
}

bool Form::beSigned(Form &F){
    if(this->_sign == F._sign)
        return (1);
    return 0;
}

const char * Form::GradeTooHighException::what() const throw(){
    return ("The Grade is to hight");
}

const char * Form::GradeTooLowException::what() const throw(){
    return ("The Grade is to low");
}

std::ostream & operator<<(std::ostream &o, Form const &fr){
    o << fr.getName() << ", Form grade " << fr.getSignGrade() << ".";
    return o;
}