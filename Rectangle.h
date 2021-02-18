//
// Created by user.v2.0 on 07.02.2021.
//

#ifndef FIGURES_RECTANGLE_H
#define FIGURES_RECTANGLE_H

#include "shape.h"
#include "base_types.h"

class Rectangle : public Shape {
private:
    double width;
    double height;
    Point center = Point(0, 0);
public:
    Rectangle(Rectangle_s rect) : width(rect.width),
                                  height(rect.height),
                                  center(rect.center) {}

    Rectangle() : width(0), height(0) {}

    double get_area() override;

    Rectangle_s get_frame_rect();

    void move(Point point);
};


#endif //FIGURES_RECTANGLE_H
