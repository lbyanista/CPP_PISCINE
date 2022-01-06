#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream> 
#include <stdlib.h>
#include <stack>
#include <list>

template <class T>
class MutantStack : public std::stack<T>
{
    private:

    public:
        MutantStack();
        MutantStack(MutantStack const &other);
        ~MutantStack();
        void operator=(MutantStack const& other);
        // typedef this->c cc;
        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin(){return this->c.begin();};
        iterator end(){return this->c.end();};
};

#endif