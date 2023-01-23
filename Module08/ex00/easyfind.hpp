#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <vector>
# include <deque>
# include <list>

template<typename T>
typename T::iterator easyfind(T &container, int toFind)
{
	typename T::iterator it;
	
	it = std::find(container.begin(), container.end(), toFind);
	//if (it == container.end())
		//throw std::exception();
	return (it);
}

# endif