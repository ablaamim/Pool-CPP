#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

#include "Fixed.hpp"

class Point {
 public:
  Point(void);
  Point(float const x, float const y);
  Point(Point const &src);
  ~Point(void);

  Point &operator=(Point const &src);

  Fixed const &getX(void) const;
  Fixed const &getY(void) const;
  void setX(Fixed const x);
  void setY(Fixed const y);

 private:
  Fixed const _x;
  Fixed const _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif