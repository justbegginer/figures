//
// Created by user.v2.0 on 07.02.2021.
//
#pragma once
#ifndef FIGURES_BASE_TYPES_H
#define FIGURES_BASE_TYPES_H

#endif //FIGURES_BASE_TYPES_H

struct Point {
    double x;
    double y;

    Point(double x, double y) : x(x), y(y) {}
};

struct Rectangle_s {
    Point center;
    double width;
    double height;
    Rectangle_s(Point center, double width , double height) : center(center) , width(width) , height(height){}
};