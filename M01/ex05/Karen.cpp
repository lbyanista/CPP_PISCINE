#include "Karen.hpp"

void Karen::debug (void) {
    cout << "[DEBUG]" << ln 
    << "I love to get extra bacon for my"
    << " 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void Karen::info( void ){
    cout << "[INFO]" << ln
    << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void Karen::warning( void ){
    cout << "[WARNING]" << ln
    << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
}

void Karen::error( void ){
    cout << "[ERROR]" << ln
    << "This is unacceptable! I want to speak to the manager now.\n";
}

level_enum GetEnum(string const str){
    string list[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int tmp = -1;
    for (int i = 0; i < 4; i++)
    {
        if(str == list[i]){
            tmp = i;
            // break;
        }

        switch (tmp)
        {
        case 0:
            return DEBUG;
        case 1:
            return INFO;
        case 2:
            return WARNING;
        case 3:
            return ERROR;
        // default:
        //     return NO_ONE;
        }
    }
        return NO_ONE;
    // }
    
    // return
    // if(str == "DEBUG") return DEBUG;
    // if(str == "INFO") return INFO;
    // if(str == "WARNING") return WARNING;
    // if(str == "ERROR") return ERROR;
    // return NO_ONE;
}

void    Karen::complain(string level){
    typedef void (Karen::*Complains) (void);
    Complains complains[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    if(GetEnum(level) == 4) return ;
    (this->*complains[GetEnum(level)]) () ;
}

Karen::Karen()
{
}

Karen::~Karen()
{
}