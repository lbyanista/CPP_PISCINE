#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <exception>
#include <vector>
// #include <algorithm>
#include <string>
#include <list>

class notFoundExeption : public std::exception {
    public:
        notFoundExeption(); //constructor
        virtual ~notFoundExeption() throw(); //destructor
        notFoundExeption(const notFoundExeption &nfe);
        notFoundExeption &operator = (const notFoundExeption &nfe);
        virtual const char* what() const throw();
};

template <class T>
typename T::iterator easyFind(T &container, int n) {
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), n);
    if (it != container.end())
        return it;
    throw notFoundExeption();
}

#endif