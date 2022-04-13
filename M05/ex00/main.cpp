#include "Bureaucrat.hpp"

int main(void){

    try{    
        // ---------- Create Bureaucrat -------------- //
        Bureaucrat br("Abdellah", 1); // if Grade < 1 OR Grade > 150 will catch an excep
        // -------------- incrementGrade ------------ //
        br.incGrade();
        // ------------ decrementGrade -------------- //
        // br.decGrade();
        // br.decGrade();
        // ----------  Operator Overload << --------- //
        cout << br << ln;
    }
    catch (exception &e){
        cout << "Exception : " << e.what() << ln; 
    }

    try
    {
        Bureaucrat ba("abel-haj", 150);
        ba.decGrade();
        cout << ba << ln;
    }
    catch(exception& e)
    {
        cout << "Exception : " << e.what() << ln; 
    }
    

    return 0;
}