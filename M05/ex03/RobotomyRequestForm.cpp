#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(string target) : Form("RobotomyRequestForm", 72, 45){
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

void RobotomyRequestForm::execute(Bureaucrat const & executor)const{
    if(!this->getSign()){
        throw Form::SignTooLowException();
    }
    if(executor.getGrade() > this->getExcuteGrade()){
        throw Form::GradeTooLowException();
    }

    srand(time(NULL));

    if(rand() % 2 == 1)
        cout << "Brrrrrr .. " << _target << " has been robotomized" << ln;
    else
        cout << "robotomy failed" << ln;
}