#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <vector>
# include <deque>
# include <list>
# include <exception>

/* 
   exception class for easyfind function, 
   inherits from std::exception class and overrides what() method.
*/

class NotFound : public std::exception
{
	virtual const char* what() const throw()
	{
		return ("\033[1;31mNot found\033[0m");
	}
};

/*
	easyfind function, takes a container and a value to find, 
	returns an iterator to the value if found, throws an exception if not found.
*/
template<typename T>
typename T::iterator	easyfind(T &container, int toFind)
{
	typename T::iterator iter;
	
	iter = std::find(container.begin(), container.end(), toFind);
	if (iter == container.end())
	{
		throw NotFound();
		//throw std::exception();
	}
	return (iter);
}

# endif