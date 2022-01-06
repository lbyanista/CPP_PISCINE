#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
void    iter(T *arr, int lenght, void (* fun)(T const &args)) {
	for (int i = 0; i < lenght; i++) {
		fun(arr[i]);
	}
	return;
}

template <typename T>
void	print(T const &a)
{
	std::cout << a << std::endl;
}

#endif