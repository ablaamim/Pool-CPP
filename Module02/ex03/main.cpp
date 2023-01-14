/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:38:43 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/13 18:38:44 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cfloat>
#include <iostream>
#include <sstream>

#include "Point.hpp"

static void printError(void)
{
  std::cout << "Error invalid parameters!\n\n"
            << "Input the vertices of the triangle and the point to check:\n"
            << "A => 0 0 | B => 15 30 | C => 30 0 | P => 0 15\n\n"
            << "Example: ./bsp 0 0 15 30 30 0 0 15\n";
}

static bool validParams(int argc, char **argv)
{
  if (argc != 9)
  {
    printError();
    return (false);
  }
  for (int i = 1; i < argc; i++)
  {
    std::string s;
    std::stringstream ss;
    float f;

    s.assign(argv[i]), ss << s, ss >> f;
    for (std::string::iterator it = s.begin(); it != s.end(); it++) {
      if (!std::isdigit(*it) && *it != '.')
      {
        return (false);
      }
    }
    if (s.empty() || f < 0 || f > FLT_MAX)
    {
      return (false);
    }
    ss.clear();
  }
  return (true);
}

static void fillParams(Point &a, Point &b, Point &c, Point &p, char *argv[])
{
  std::stringstream ss;
  std::string s;
  float x;
  float y;

  s.assign(argv[1]), ss << s, ss >> x;
  ss.clear();
  s.assign(argv[2]), ss << s, ss >> y;
  ss.clear();
  a.setX(Fixed(static_cast<int>(x)));
  a.setY(Fixed(static_cast<int>(y)));

  s.assign(argv[3]), ss << s, ss >> x;
  ss.clear();
  s.assign(argv[4]), ss << s, ss >> y;
  ss.clear();
  b.setX(Fixed(static_cast<int>(x)));
  b.setY(Fixed(static_cast<int>(y)));

  s.assign(argv[5]), ss << s, ss >> x;
  ss.clear();
  s.assign(argv[6]), ss << s, ss >> y;
  ss.clear();
  c.setX(Fixed(static_cast<int>(x)));
  c.setY(Fixed(static_cast<int>(y)));

  s.assign(argv[7]), ss << s, ss >> x;
  ss.clear();
  s.assign(argv[8]), ss << s, ss >> y;
  ss.clear();
  p.setX(Fixed(static_cast<int>(x)));
  p.setY(Fixed(static_cast<int>(y)));
}

static Point getMinSize(Point &a, Point &b, Point &c, Point &p)
{
  Point width;

  width.setX(Fixed::min(a.getX(), b.getX()));
  width.setX(Fixed::min(width.getX(), c.getX()));
  width.setX(Fixed::min(width.getX(), p.getX()));

  width.setY(Fixed::min(a.getY(), b.getY()));
  width.setY(Fixed::min(width.getY(), c.getY()));
  width.setY(Fixed::min(width.getY(), p.getY()));

  return (width);
}

static Point getMaxSize(Point &a, Point &b, Point &c, Point &p)
{
  Point width;

  width.setX(Fixed::max(a.getX(), b.getX()));
  width.setX(Fixed::max(width.getX(), c.getX()));
  width.setX(Fixed::max(width.getX(), p.getX()));

  width.setY(Fixed::max(a.getY(), b.getY()));
  width.setY(Fixed::max(width.getY(), c.getY()));
  width.setY(Fixed::max(width.getY(), p.getY()));

  return (width);
}

int main(int argc, char *argv[])
{
  Point a, b, c, p;
  Point minSize, maxSize;

  if (!validParams(argc, argv))
  {
    printError();
    return (1);
  }
  fillParams(a, b, c, p, argv);
  minSize = getMinSize(a, b, c, p);
  maxSize = getMaxSize(a, b, c, p);
  if (bsp(a, b, c, p))
    std::cout << "\033[1;32mThe point is inside the triangle.\033[0m\n";
  else
    std::cout << "\033[1;31mThe point is outside the triangle.\033[0m\n";
  for (int i = maxSize.getY().toInt(); i >= minSize.getY().toInt(); i--)
  {
    for (int j = minSize.getX().toInt(); j <= maxSize.getX().toFloat(); j++)
    {
      Point temp(j, i);
      if (p.getX() == j && p.getY() == i)
      {
        std::cout << "\033[1;33mo\033[0m";
      } else if (bsp(a, b, c, temp))
      {
        std::cout << "\033[1;34m#\033[0m";
      } else
      {
        std::cout << ".";
      }
    }
    std::cout << "\n";
  }
  return (0);
}
