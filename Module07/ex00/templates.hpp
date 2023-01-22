#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

#include <iostream>

class Awesome
{
    public:
        Awesome( int n ) : _n( n ) {}
        bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
        bool operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
        bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
        bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
        bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
        bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
        int getN() const { return this->_n; }
    private:
        int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.getN(); return o; }

template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min(T &a, T &b)
{
    return (a < b ? a : b);
}

template <typename T>
T max(T &a, T &b)
{
    return (a > b ? a : b);
}

#endif