#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(string target){
    this->_Target = target;
    cout << "Default Const called" << ln;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    cout << "Destr called" << ln;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &SC){
    cout << "Copy Assignement operator called" << ln;
    this->_Target = SC._Target;
    return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &SC){
    cout << "Copy constructor called" << ln;
    *this = SC;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if ( !this->getSign() ) {

		throw Form::SignTooLowException();
	}

	if ( executor.getGrade() > this->getExcuteGrade() ) {

		throw Form::GradeTooLowException();
	}

    std::ofstream out;

	out.open( _Target + "_shrubbery" );

	if ( out && out.good() ) {

		out <<"                                                       . "<< ln;
        out <<"                                      .         ;"<< ln;
        out <<"         .              .              ;%     ;;" << ln;
        out <<"           ,           ,                :;%  %;" << ln;
        out <<"            :         ;                   :;%;'     .,"<<ln; 
        out <<"   ,.        %;     %;            ;        %;'    ,;"<< ln;
        out <<"     ;       ;%;  %%;        ,     %;    ;%;    ,%'"<< ln;
        out <<"      %;       %;%;      ,  ;       %;  ;%;   ,%;'"<< ln;
        out <<"       ;%;      %;        ;%;        % ;%;  ,%;'"<< ln;
        out <<"        `%;.     ;%;     %;'         `;%%;.%;'"<< ln;
        out <<"         `:;%.    ;%%. %@;        %; ;@%;%'"<< ln;
        out <<"            `:%;.  :;bd%;          %;@%;'"<< ln;
        out <<"              `@%:.  :;%.         ;@@%;'"<< ln;
        out <<"                `@%.  `;@%.      ;@@%;"<< ln;
        out <<"                  `@%%. `@%%    ;@@%;"<< ln;
        out <<"                    ;@%. :@%%  %@@%;"<< ln;
        out <<"                      %@bd%%%bd%%:;"<< ln;
        out <<"                        #@%%%%%:;;"<< ln;
        out <<"                        %@@%%%::;"<< ln;
        out <<"                        %@@@%(o);  . '"<< ln;
        out <<"                        %@@@o%;:(.,'"<< ln;
        out <<"                    `.. %@@@o%::;"<< ln;
        out <<"                      `)@@@o%::;"<<ln;
        out <<"                        %@@(o)::;"<< ln;
        out <<"                       .%@@@@%::;"<< ln;
        out <<"                       ;%@@@@%::;."<<ln;
        out <<"                      ;%@@@@%%:;;;."<< ln;
        out <<"                  ...;%@@@@@%%:;;;;,.."<< ln;
        out.close();
	}
}