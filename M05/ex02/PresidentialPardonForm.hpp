#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form {
private:
    string _target;
public:
    PresidentialPardonForm(string target="target");
    PresidentialPardonForm(PresidentialPardonForm const &PP);
    PresidentialPardonForm & operator=(PresidentialPardonForm const &PP);
    ~PresidentialPardonForm();

    void execute(Bureaucrat const & executor)const;
};


#endif