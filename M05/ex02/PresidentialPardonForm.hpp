#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"

class PresidentialPardonForm
{
private:
    string _target;
public:
    PresidentialPardonForm(string target="target");
    PresidentialPardonForm(PresidentialPardonForm const &PP);
    PresidentialPardonForm & operator=(PresidentialPardonForm const &PP);
    ~PresidentialPardonForm();
};


#endif