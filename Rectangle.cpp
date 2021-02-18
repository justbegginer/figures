//
// Created by user.v2.0 on 07.02.2021.
//

#include "Rectangle.h"
double Rectangle::get_area() {
    return width * height;
}

Rectangle_s Rectangle::get_frame_rect() {
    return Rectangle_s(center ,width , height);
}

void Rectangle::move(Point point) {
    center = Point(center.x + point.x , center.y + point.y);
}
