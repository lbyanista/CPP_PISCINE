#include "Brain.hpp"

Brain::Brain(){
    cout << "Default Brain constructor called\n";
    
}

Brain::Brain(string ideas){
    cout << "Copy Brain constructor called\n";
    ideas[100];
}

Brain & Brain::operator=(const Brain &bra){
    cout << "Copy Assigment  operator called\n";
    bra.ideas[100];
    return (*this);
}

Brain::~Brain(){
    cout << "Destructor Brain called\n";
}