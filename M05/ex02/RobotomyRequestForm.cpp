#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(string target){
    cout << "Const RRF called" << ln;
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &RRF){
    cout << "Copy constructor RRF called" << ln;
    *this = RRF;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & RRF){
    cout << "Copy Assignement RRF operator called" << ln;
    this->_target = RRF._target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    cout <<  "Destr RRF callled" << ln;
}