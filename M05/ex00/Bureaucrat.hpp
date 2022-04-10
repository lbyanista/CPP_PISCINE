#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#define cout std::cout
#define ln std::endl
#define string std::string
#define exception std::exception

class Bureaucrat
{
private:
    string const _name;
    int _grade;
public:
    Bureaucrat();
    Bureaucrat(string name, int grade);
    Bureaucrat(Bureaucrat const &br);
    Bureaucrat & operator=(const Bureaucrat &br);
    ~Bureaucrat();

    const string &getName(void)const;
    const int &getGrade(void)const;

    void    incGrade(void);
    void    decGrade(void);

    class GradeTooHighException : public exception {
        const char * what () const throw ();
    };
    
    class GradeTooLowException : public exception {
        const char * what () const throw ();
    };
};
    std::ostream & operator<<(std::ostream & o, const Bureaucrat &br);

#endif