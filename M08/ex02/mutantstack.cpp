#include "mutantstack.hpp"
template <class T>
MutantStack<T>::MutantStack()
{

}

template <class T>
MutantStack<T>::MutantStack(MutantStack const &other)
{
   *this = other;
}

template <class T>
void MutantStack<T>::operator=(MutantStack const &other)
{
   this->c = other.c;
}


template <class T>
MutantStack<T>::~MutantStack()
{
    
}

// template <class T>
// typename MutantStack<T>::iterator MutantStack<T>::end()
// {
//    return (this->c.end());
// }

// template <class T>
// typename MutantStack<T> MutantStack<T>::iterator begin()
// {
//    return (this->c.begin());
// }