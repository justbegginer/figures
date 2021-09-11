//
// Created by user.v2.0 on 07.02.2021.
//
#pragma once
#ifndef FIGURES_CIRCLE_H
#define FIGURES_CIRCLE_H

#include "base_types.h"
#include "shape.h"

#define PI 3.1415

class Circle : public Shape {
private:
  Point center_;
  double radius_;
public:
  Circle():
   center_(Point(0, 0)),
   radius_(0) {}

  Circle(Point center, int radius):
   center_(center),
   radius_(radius) {}

  double get_area() override;

  Rectangle_s get_frame_rect() override;

  void move(Point point) override;
};


#endif //FIGURES_CIRCLE_H
