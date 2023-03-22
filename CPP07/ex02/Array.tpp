# include "Array.hpp"

template <class T>
Array<T>::Array(void): arr(new T[0]), _size(0)
{}

template <class T>
Array<T>::Array(int n){
	try{
			arr = new T[n];
			_size = n;
			for (int i = 0; i < _size; i++)
				arr[i] = 0;
		}
		catch (...)
		{
			arr = new T[0];
			_size = 0;
			std::cerr << "Error during the construction" << std::endl;
		}
}


template <class T>
Array<T>::Array(const Array &a): arr(new T[a.size()]), _size(a.size())
{
	for (int i = 0; i < a.size(); i++)
		arr[i] = a.arr[i];
}

template <class T>
Array<T>::~Array(void) {
	delete[] arr;
}

template <class T>
Array<T>	&Array<T>::operator = (const Array &a){
	delete [] arr;
	arr = new T[a.size()];
	for (int i = 0; i < a.size(); i++)
		arr[i] = a.arr[i];
	return (*this);
}

template <class T>
int	Array<T>::size(void) const
{
		return (_size);
}

template <class T>
T &Array<T>::operator[](const int idx)
{
	if (idx > size() - 1 || idx < 0)
		throw (OutOfBounds());
	return (arr[idx]);
}

