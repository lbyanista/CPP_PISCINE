#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

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

   
    try
    {
        ShrubberyCreationForm SC1("home");
        SC1.beSigned(Bureaucrat("abdel", 30));
        SC1.execute(Bureaucrat("kk", 50));
    }
    catch(exception& e)
    {
        cout << e.what() << ln;
    }

    
    
    // cout << SC1.gettarget() << ln;

    return 0;
}