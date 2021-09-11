//
// Created by user.v2.0 on 11.09.2021.
//

#ifndef FIGURES_TRIANGLE_H
#define FIGURES_TRIANGLE_H

#include "shape.h"

class Triangle : Shape {
public:
  Triangle();

  Triangle(Point A, Point B, Point C);

  double get_area() override;

  Rectangle_s get_frame_rect() override;

  void move(Point point) override;

private:
  Point points_[3]= {Point(0, 0), Point(0, 0), Point(0, 0)};
  Point center_ = Point(0, 0);

  void build_center_();
};
//

#endif //LABA3_TRIANGLE_H