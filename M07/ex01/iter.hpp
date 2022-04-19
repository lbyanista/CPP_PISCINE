#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

#define cout std::cout
#define ln std::endl

template <typename T>
void    iter(T *arr, int lenght, void (* fun)(T const &args)) {
	for (int i = 0; i < lenght; i++)
		fun(arr[i]);
	return;
}

template <typename T>
void	print(T const &a)
{
	cout << a << ln;
}

#endif