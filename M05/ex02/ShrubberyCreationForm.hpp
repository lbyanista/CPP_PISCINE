#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"

class ShrubberyCreationForm{
    string _Target;
    public:
        ShrubberyCreationForm(string target="target");
        ShrubberyCreationForm(ShrubberyCreationForm const &SC);
        ShrubberyCreationForm & operator=(ShrubberyCreationForm const &CS);
        ~ShrubberyCreationForm();
};

#endif