#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include <climits>

typedef std::vector<int>::iterator iteratorVectorInt;

class Span  
{
	public:

		class CannotAddNewElementException : public std::exception
		{
				const char* what(void) const throw ();
		};

		class ElementsLessThanTwoException : public std::exception
		{
				const char* what(void) const throw ();
		};

	private:

		unsigned int		_n;
		std::vector<int>	_values;

	public:

		Span( void );
		Span( unsigned int N );
		Span( Span const & src );
		virtual ~Span( void );

		void				addNumber( int value );
		void				addNumber( iteratorVectorInt begin, iteratorVectorInt end );

		unsigned int		shortestSpan( void );
		unsigned int		longestSpan( void );

		Span & 				operator=( Span const & rhs );

};

#endif