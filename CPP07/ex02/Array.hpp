#ifndef ARRAY_HPP
# define ARRAY_HPP

template <class T>
class	Array {
	private:
		T	*arr;
	public:
		Array(void);
		Array(int n);
		Array(const Array &a);
		~Array(void);
		int	size(void);
};

Array::Array(void): arr(new T[0])
{
}

Array::Array(int n) : arr(new T[n])
{
}

Array::Array(const Array &a): arr(new T[a.size()])
{
	//try and catch ?
	for (int i = 0; i < a.size(); i++)
		arr[i] = a.arr[i];
	//size
}

Array::~Array(void)
{
	delete[] arr;
}

int	Array::size(void)
{
	//try and catch ?
}

#endif
