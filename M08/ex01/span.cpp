#include "span.hpp"

Span::Span(unsigned int size)
{
	_arr = new int[size];
	_size = size;
	_index = 0;
}

Span::~Span()
{
	if (_arr)
		delete [] _arr;
}

Span::Span()
{
	_arr = NULL;
	_index = 0;
	_size = 0;
}

void Span::addNumber(int x)
{
	if (_index == _size)
	    throw outOfRange;
	_arr[_index] = x;
	_index++;
}

void Span::operator=(const Span& other)
{
	if (_arr)
		delete [] _arr;
	_size = other._size;
	_index = other._index;
	_arr = new int[_size];
	for (int i = 0; i<_size;i++)
		_arr[i] = other._arr[i];
}

Span::Span(Span const &other)
{
	_arr = NULL;
   *this = other;
}

int Span::shortestSpan()
{
	if (_index < 2)
		throw tooFewNumbers;
	int n = _index;
	std::sort(_arr, _arr + n);
 	int min = INT_MAX;
	for (int i = 0; i < n - 1; i++)
		if (_arr[i+1] - _arr[i] < min)
			min = _arr[i+1] - _arr[i];
	return min;
}

int Span::longestSpan()
{
	if (_index < 2)
		throw tooFewNumbers;
	int n = _index;
	std::sort(_arr, _arr + n);
	return (_arr[n - 1]  - _arr[0]);
}

const char* Span::outOfRange::what() const throw()
{
    return "Exception: span is already full...";
}

const char* Span::tooFewNumbers::what() const throw()
{
    return "Exception: span should contain more then 2 numbers atleast";
}