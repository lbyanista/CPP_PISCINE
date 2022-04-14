#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"

class RobotomyRequestForm
{
private:
    string _target;
public:
    RobotomyRequestForm(string target = "target");
    RobotomyRequestForm(RobotomyRequestForm const &RRF);
    RobotomyRequestForm & operator=(RobotomyRequestForm const &RRF);
    ~RobotomyRequestForm();
};


#endif