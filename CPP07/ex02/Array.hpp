#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <stdlib.h>

template <class T>
class	Array {
	private:
		T	*arr;
		int	_size;
	public:
		Array(void);
		Array(int n);
		Array(const Array &a);
		Array	&operator = (const Array &a);
		~Array(void);
		int	size(void) const;
		T &operator[](const int idx);
		class OutOfBounds: public std::exception {
			public:
				OutOfBounds(void){};
				virtual const char * what() const throw (){ return ("Index is out of Bounds");};
	};
};
# include "Array.tpp"
#endif
