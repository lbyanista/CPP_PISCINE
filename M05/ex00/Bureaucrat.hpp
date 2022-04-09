#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#define cout std::cout
#define ln std::endl
#define string std::string

class Bureaucrat
{
private:
    string const _name;
    int _grand;
public:
    Bureaucrat();
    Bureaucrat(Bureaucrat const &br);
    Bureaucrat & operator=(const Bureaucrat &br);
    ~Bureaucrat();
    string getName(void);
    int getGrade(void);
};
    std::ostream & operator<<(std::ostream & o, const Bureaucrat &br);

#endif