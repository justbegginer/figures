//
// Created by user.v2.0 on 07.02.2021.
//

#include "Circle.h"

double Circle::get_area() {
  return PI * radius_ * radius_;
}

Rectangle_s Circle::get_frame_rect() {
  return Rectangle_s(center_, radius_ * 2, radius_ * 2);
}

void Circle::move(Point point) {
  center_ = Point(center_.x_ + point.x_, center_.y_ + point.y_);
}
