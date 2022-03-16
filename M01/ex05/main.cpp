#include "Karen.hpp"

int main(int ac, char **av){
    Karen KarenObj;
    if(ac == 2){
        KarenObj.complain(av[1]);
    }

    // KarenObj.complain("INFO");
    // KarenObj.complain("WARNING");
    // KarenObj.complain("ERROR");

    return 0;
}