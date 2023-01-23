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
	typename T::iterator iter;
	
	iter = std::find(container.begin(), container.end(), toFind);
	//if (iter == container.end())
		//throw std::exception();
	return (iter);
}

# endif