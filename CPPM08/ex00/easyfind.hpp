#ifndef EASYFIND_H
#define EASYFIND_H
#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
#include <list>

class notFoundExeption : public std::exception
{
    public:
        notFoundExeption(); //constractor
        virtual ~notFoundExeption() throw(); //destractor
        notFoundExeption(const notFoundExeption &ast);
        notFoundExeption &operator = (const notFoundExeption &ic);
        virtual const char* what() const throw();
};

template <class T>
typename T::iterator easyFind(T &container, int n)
{
    typename T::iterator itr;
    itr = std::find(container.begin(), container.end(), n);
    if (itr != container.end()){
        return itr;
    }
    throw notFoundExeption();
}

#endif