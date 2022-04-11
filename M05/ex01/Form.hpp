#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
private:
	string const _name;
	bool _sign;
	const int _grade_sig;
	const int _grade_exec;
public:
	Form();
	Form(const string name, const int grade_sig, const int grade_exec);
	Form(Form const &fr);
	Form & operator=(const Form &fr);
	~Form();

	class GradeTooHighException : public exception{
		public:
			const char* what() const throw();
	};
	class GradeTooLowException : public exception{
		public:
			const char* what() const throw();
	};

	string getName(void) const;
	bool    getSign(void) const;
	int     getSignGrade(void) const;
	int     getExcuteGrade(void) const;
			   
	void    setSign(bool sign);

	bool    beSigned(Form & F);

};

std::ostream & operator<<(std::ostream &o, Form const &fr);

#endif