#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form{
private:
    string _target;
public:
    RobotomyRequestForm(string target = "target");
    RobotomyRequestForm(RobotomyRequestForm const &RRF);
    RobotomyRequestForm & operator=(RobotomyRequestForm const &RRF);
    ~RobotomyRequestForm();

    void execute(Bureaucrat const & executor) const;

};


#endif