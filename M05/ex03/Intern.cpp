#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern( const Intern &form )
{
    *this = form;
}

Intern::~Intern(){}

  // -------------------- Assignement operator -------------------- //

Intern&   Intern::operator = ( const Intern  &intern)
{
    (const Intern)intern;
    return (*this);
}

    // ------------------ Member functions ------------------------ //

Form*  Intern::makeShrubberyCreation(string const & target) const {
    return (new ShrubberyCreationForm(target));
}

Form*  Intern::makeRobotomyRequest(string const & target) const {
    return (new RobotomyRequestForm(target));
}

Form*  Intern::makePresidentialPardon(string const & target) const {
    return (new PresidentialPardonForm(target));
}


Form * Intern::makeForm( string const &form_name, string const &target_form)
{
    string const form_names[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

    Form* (Intern::*forms[3])(string const &) const = {
        &Intern::makeShrubberyCreation,
        &Intern::makeRobotomyRequest,
        &Intern::makePresidentialPardon
    };
    for (int i = 0; i < 3; i++)
        if (!form_name.compare(form_names[i]))
        {
            cout << "Intern creates " << form_name << "." << ln;
            return (this->*(forms[i]))(target_form);
        }
    cout << "The form is unkown" << ln;
    return (NULL);
}