#pragma  once
#include <iostream> 
#include <stdlib.h>
#include <stack>
#define string std::string
#define cout std::cout
#define	endl std::endl
#define to_string(x) std::to_string(x)

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
