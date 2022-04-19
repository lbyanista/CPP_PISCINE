#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <class T>

class Array
{
    private:
        int _size;
        T *_arr;
    public:
        Array()
        {
            _arr = NULL;
            _size = 0;
        }
        ~Array()
        {
            std::cout << "Destru " << std::endl;
            if (_arr)
                delete [] _arr;
        }
        Array(unsigned int n)
        {
            _size = n;
            _arr = new T[n]();
        }
        Array(Array const &other)
        {
            _arr = NULL;
            _size = 0;
            *this = other;
        }
        Array& operator=(Array const &other)
        {
            if (_arr)
                delete [] _arr;
            int n = other.size();
            _arr = new T[n];
            _size = n;
            for (int i = 0; i < n;i++)
                _arr[i] = other._arr[i];
            return *this;
        }
        void* operator new[](unsigned long n) 
        {
            T *ptr;
            ptr = new T[n];
            return ptr;
        }
        T& operator [](long long i)
        {
            if (i < 0 || (int)i >= this->_size)
                throw outOfBound;
            return _arr[i];
        }
        int size() const
        {
            return _size;
        }
        class outOfBoundException: public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return "out of bound index....";
                }
        }outOfBound;
};
#endif