#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template <class T>
class	Array {
	private:
		T	*arr;
		int	_size;
	public:
		Array(void): arr(new T[0]), _size(0){};
		Array(int n): arr(new T[n]), _size(n){
			for (int i = 0; i < _size; i++)
				arr[i] = 0;
	};
		Array(const Array &a): arr(new T[a.size()]), _size(a.size())
		{
			for (int i = 0; i < a.size(); i++)
				arr[i] = a.arr[i];
		};
		~Array(void) {
			delete[] arr;
		};
		int	size(void) const
		{
			return (_size);
		};
		T &operator[](const int idx)
		{
			if (idx > size() - 1 || idx < 0)
				throw (OutOfBounds());
			return (arr[idx]);
		};
		class OutOfBounds: public std::exception {
			public:
				OutOfBounds(void){};
				virtual const char * what() const throw (){ return ("Index is out of Bounds");};
	};
};
#endif
