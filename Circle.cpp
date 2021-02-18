//
// Created by user.v2.0 on 07.02.2021.
//

#include "Circle.h"

double Circle::get_area() {
    return PI * radius * radius;
}

Rectangle_s Circle::get_frame_rect() {
    return Rectangle_s(center , radius * 2 , radius * 2);
}

void Circle::move(Point point) {
    center = Point(center.x + point.x , center.y+point.y);
}
