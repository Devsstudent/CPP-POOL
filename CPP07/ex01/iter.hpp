#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>


template<class T> void	iter(T arr[],
long size,
void func(T &))
{
	if (size <= 0)
		return ;
	for (int i = 0; i < size; i++)
		func(arr[i]);
}

#endif
