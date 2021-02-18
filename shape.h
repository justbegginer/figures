//
// Created by user.v2.0 on 07.02.2021.
//
#pragma once
#ifndef FIGURES_SHAPE_H
#define FIGURES_SHAPE_H

#endif //FIGURES_SHAPE_H

#include "base_types.h"

class Shape {
    virtual double get_area() { return 0; }

    virtual Rectangle_s get_frame_rect() { return Rectangle_s(Point(0 , 0) ,0 , 0); }

    virtual void move(Point point) { }
};

