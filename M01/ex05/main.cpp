#include "Karen.hpp"

int main(void){
    Karen KarenObj;
    
    KarenObj.complain("DEBUG");
    KarenObj.complain("INFO");
    KarenObj.complain("WARNING");
    KarenObj.complain("ERROR");

    return 0;
}