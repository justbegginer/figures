//
// Created by user.v2.0 on 07.02.2021.
//
#pragma once
#ifndef FIGURES_BASE_TYPES_H
#define FIGURES_BASE_TYPES_H

#endif //FIGURES_BASE_TYPES_H

struct Point {
  double x_;
  double y_;

  Point(double x, double y) : x_(x), y_(y) {}
};

struct Rectangle_s { Point center_;
  double width_;
  double height_;

  Rectangle_s(Point center, double width, double height) : center_(center), width_(width), height_(height) {}
};