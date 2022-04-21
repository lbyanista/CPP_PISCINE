#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream> 
#include <stack>
#include <list>

#define cout std::cout
#define endl std::endl


template <class T>
class MutantStack : public std::stack<T>
{
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