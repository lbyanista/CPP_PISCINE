#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include <fstream> 

class ShrubberyCreationForm : public Form{
    string _Target;
    public:
        ShrubberyCreationForm(string target="target");
        ShrubberyCreationForm(ShrubberyCreationForm const &SC);
        ShrubberyCreationForm & operator=(ShrubberyCreationForm const &CS);
        ~ShrubberyCreationForm();


        void execute(Bureaucrat const & executor) const;

};

#endif