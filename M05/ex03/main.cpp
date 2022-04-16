#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void){

    // try{    
    //     // ---------- Create Bureaucrat -------------- //
    //     Bureaucrat br("Abdellah", 11); // if Grade < 1 OR Grade > 150 will catch an excep
    //     // -------------- incrementGrade ------------ //
    //     br.incGrade();
    //     // ------------ decrementGrade -------------- //
    //     br.decGrade();
    //     // ----------  Operator Overload << --------- //
    //     cout << br << ln;
    //     Form f1("sidi", 10, 10);
    //     f1.beSigned(br);
    // }
    // catch (exception &e){
    //     cout << "Exception : " << e.what() << ln; 
    // }

    // try
    // {
    //     Bureaucrat ba("abel-haj", 11);
    //     ba.incGrade();
    //     cout << ba << ln;

    //     Form f2("houda", 11, 10);
    //     f2.beSigned(ba);
    //     cout << f2.getExcuteGrade() << ln;
    // }
    // catch(exception& e)

    // {
    //     cout << "Exception : " << e.what() << ln; 
    // }

   
    // try
    // {
    //     ShrubberyCreationForm SC1("home");
    //     SC1.beSigned(Bureaucrat("abdel", 30));
    //     SC1.execute(Bureaucrat("kk", 50));
    // }
    // catch(exception& e)
    // {
    //     cout << e.what() << ln;
    // }


    // try
    // {
    //     RobotomyRequestForm RRF("home");
    //     RRF.beSigned(Bureaucrat("rachid", 50));
    //     RRF.execute(Bureaucrat("nasim", 1));

    // }
    // catch(exception& e)
    // {
    //     cout << e.what() << ln;
    // }

    // try
    // {
    //     PresidentialPardonForm PP("home");
    //     PP.beSigned(Bureaucrat("LAAYOUNE", 1));
    //     PP.execute(Bureaucrat("houa", 11));

    // }
    // catch(exception& e)
    // {
    //     cout << e.what() << '\n';
    // }

    // try
    // {
    //     Bureaucrat br("hello", 4);
    //     Form *p = new PresidentialPardonForm();
    //     p->beSigned(br);
    //     br.executeForm(*p);
    // }
    // catch(exception& e)
    // {
    //     cout << e.what() << '\n';
    // }

    try
    {
        Bureaucrat br("houa", 12);
        Intern i;
        Form *p = i.makeForm("presidential pardon", "houa");
        if(p != NULL){
            p->beSigned(br);
            p->execute(br);
        }
    }
    catch(exception& e)
    {
        cout << e.what() << '\n';
    }

    try
    {
        
    Intern  someRandomIntern;
    Form*   rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");

    }
    catch(const exception& e)
    {
        cout << e.what() << '\n';
    }
    
    

    return 0;
}