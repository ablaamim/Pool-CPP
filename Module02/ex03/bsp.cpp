/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:38:35 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/13 18:38:39 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float area(float x1, float y1, float x2, float y2, float x3, float y3) {
  return fabs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
  /* Calculate area of triangle ABC */
  Fixed totalArea = area(a.getX().toFloat(), a.getY().toFloat(),
                         b.getX().toFloat(), b.getY().toFloat(),
                         c.getX().toFloat(), c.getY().toFloat());

  /* Calculate area of triangle PBC */
  Fixed a1 = area(point.getX().toFloat(), point.getY().toFloat(),
                  b.getX().toFloat(), b.getY().toFloat(),
                  c.getX().toFloat(), c.getY().toFloat());

  /* Calculate area of triangle PAC */
  Fixed a2 = area(a.getX().toFloat(), a.getY().toFloat(),
                  point.getX().toFloat(), point.getY().toFloat(),
                  c.getX().toFloat(), c.getY().toFloat());

  /* Calculate area of triangle PAB */
  Fixed a3 = area(a.getX().toFloat(), a.getY().toFloat(),
                  b.getX().toFloat(), b.getY().toFloat(),
                  point.getX().toFloat(), point.getY().toFloat());

  return (totalArea == a1 + a2 + a3 ? true : false);
}
