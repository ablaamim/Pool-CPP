#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    
	private:
		unsigned int	_size;
		T				*_array;

	public:
		Array(void) : _size(0), _array(new T[0]()){}
		Array(unsigned int n) : _size(n), _array(new T[n]()){}
		Array(Array<T> const &src)
		{
			_array = new T[src._size];
			*this = src;
		}
		~Array(void)
		{
			delete []_array;
		}

		unsigned int	size(void) const
		{
			return _size;
		}

		Array<T> &operator=(Array const &rhs)
		{
			delete [] _array;
			_size = rhs._size;
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = rhs._array[i];
			return *this;
		}

		T &operator[](int index)
		{
			if (index < 0 || index >= static_cast<int>(_size))
				throw OutOfLimitsException();
			return _array[index];
		}

		class OutOfLimitsException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Error : element is out of the limits.";
			}
		};
};
#endif