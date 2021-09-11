//
// Created by user.v2.0 on 07.02.2021.
//

#include "Rectangle.h"

double Rectangle::get_area() {
  return width_ * height_;
}
Rectangle_s Rectangle::get_frame_rect() {
  return {center_, width_, height_};
}

void Rectangle::move(Point point) {
  center_ = Point(center_.x_ + point.x_, center_.y_ + point.y_);
}
