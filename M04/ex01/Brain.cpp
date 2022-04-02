#include "Brain.hpp"

Brain::Brain(){
    cout << "Default Brain constructor called\n";
    
}

Brain::Brain(string ideas){
    cout << "Brain constructor Param called\n";
    ideas[100];
}

Brain & Brain::operator=(const Brain &br){
    cout << "Copy Assigment  operator called\n";
    for (size_t i = 0; i < br.ideas->length(); i++)
    {
        this->ideas[i] = br.ideas[i];
    }
    
    return (*this);
}

Brain::Brain(Brain const &br){
    cout << "Copy constructor Brain called\n";
    for (size_t i = 0; i < br.ideas->length(); i++)
    {
        this->ideas[i] = br.ideas[i];
    }
    *this = br;
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