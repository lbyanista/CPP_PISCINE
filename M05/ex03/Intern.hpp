#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Form;
class Intern
{
public:
	Intern(void);
	Intern(Intern const &In);
	Intern & operator=(const Intern &In);
	~Intern();

	Form	*makeForm (string const &form_name, string const &target_form);

	Form	*makeShrubberyCreation(string const & target) const ;
    Form	*makeRobotomyRequest(string const & target) const ;
    Form	*makePresidentialPardon(string const & target) const ;
};


#endif