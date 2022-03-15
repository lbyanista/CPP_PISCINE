#include "Karen.hpp"

int main(int ac, char **av){
    Karen *karenObj = new Karen();
    string arg;
    if(ac > 1)
    {
        arg = av[1];
        if(arg == "DEBUG") {
            karenObj->complain(arg);
        }
    }
    return 0;
}