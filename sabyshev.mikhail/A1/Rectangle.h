//
// Created by user.v2.0 on 07.02.2021.
//
#pragma once
#ifndef FIGURES_RECTANGLE_H
#define FIGURES_RECTANGLE_H

#include "shape.h"
#include "base_types.h"

class Rectangle : public Shape {
private:
  double width_;
  double height_;
  Point center_ = Point(0, 0);
public:
  Rectangle():
   width_(0),
   height_(0) {}

  Rectangle(Rectangle_s rect):
   width_(rect.width_),
   height_(rect.height_),
   center_(rect.center_) {}


  double get_area() override;

  Rectangle_s get_frame_rect() override;

  void move(Point point) override;
};


#endif //FIGURES_RECTANGLE_H
