#ifndef SPAN_H
#define SPAN_H
#include <iostream> 
#include <stdlib.h>
#include <algorithm>
#include <exception>
#include <math.h>
#include <limits.h>
#include <vector>

// template <typename itr>

class Span
{
	private:
		int *_arr;
		int _size;
		int _index;

	public:
		Span();
		Span(unsigned int size);
		Span(const Span& cpy);
		void operator=(const Span& st);
		~Span();

		void	addNumber(int x);
		int		shortestSpan();
		int		longestSpan();
		template<class Itr>
		void addNumber( Itr begin,  Itr end);

		class tooFewNumbers: public std::exception
        {
            public:
                virtual const char* what() const throw();
        } tooFewNumbers;
		class outOfRange: public std::exception
        {
            public:
            	const char* what() const throw();
        } outOfRange;
};


template<class Itr>
void Span::addNumber( Itr begin,  Itr end)
{
	if ((end - begin) > (_size - _index))
		throw outOfRange;
	while (begin != end)
		addNumber(*begin++);
}

#endif