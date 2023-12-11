#ifndef iter_hpp
# define iter_hpp

#include <iostream>
#include <string>

template<typename T>
void iter(T *arr, int s, void (*f)(T))
{
	for (int i = 0; i < s; i++)
		f(arr[i]);
}

#endif
