#include "Brain.hpp"

Brain::Brain(){
    cout << "Default Brain constructor called\n";
    
}

Brain::Brain(string ideas){
    cout << "Copy Brain constructor called\n";
    ideas[100];
}

Brain & Brain::operator=(const Brain &){
    cout << "Copy Assigment  operator called\n";
    return (*this);
}

Brain::~Brain(){
    cout << "Destructor Brain called\n";
}

// void Brain::SetIdeas(string str){
//     for (size_t i = 0; i < str.length(); i++)
//         this->ideas[i] = str[i];
// }

// string Brain::GetIdeas(void){
//     string str;
//     for (size_t i = 0; i < this->ideas->length(); i++)
//     {
//         str[i] = this->ideas[i];
//     }
//     return (str);
    
// }