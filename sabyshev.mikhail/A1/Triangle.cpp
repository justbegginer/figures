#include "Triangle.h"
#include <iostream>
#include <cmath>

Triangle::Triangle() {
  points_[0] = Point(-1, 0);
  points_[1] = Point(0, 1);
  points_[2] = Point(1, 0);
  build_center_();
}

Triangle::Triangle(Point A, Point B, Point C) {
  points_[0] = A;
  points_[1] = B;
  points_[2] = C;
  build_center_();
}

double Triangle::get_area() {
  return std::abs((points_[1].x_ - points_[0].x_) * (points_[2].y_ - points_[0].y_) -
                  (points_[2].x_ - points_[0].x_) * (points_[1].y_ - points_[0].y_)) / 2;
}

Rectangle_s Triangle::get_frame_rect() {
  double maxx = fmax(fmax((points_[0]).x_, (points_[1]).x_), (points_[2]).x_);
  double minx = fmin(fmin((points_[0]).x_, (points_[1]).x_), (points_[2]).x_);
  double maxy = fmax(fmax((points_[0]).y_, (points_[1]).y_), (points_[2]).y_);
  double miny = fmin(fmin((points_[0]).y_, (points_[1]).y_), (points_[2]).y_);
  return Rectangle_s{{(maxx - (maxx - minx) * 0.5), (maxy - (maxy - miny) * 0.5)}, maxx - minx, maxy - miny};
}

void Triangle::move(Point point) {
  points_[0] = Point(points_[0].x_ + point.x_, points_[0].y_ + point.y_);
  points_[1] = Point(points_[1].x_ + point.x_, points_[1].y_ + point.y_);
  points_[2] = Point(points_[2].x_ + point.x_, points_[2].y_ + point.y_);
  build_center_();
}

void Triangle::build_center_() {
  center_ = Point((points_[0].x_ + points_[1].x_ + points_[2].x_) / 3,
                  (points_[0].y_ + points_[1].y_ + points_[2].y_) / 3);
}