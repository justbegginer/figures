#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
int main() {
    Rectangle rect (Rectangle_s(Point(0 , 0) , 1 , 1));
    Circle circle (Point(0 , 0) , 1);
    std::cout  << rect.get_area() << "\n";
    std::cout << circle.get_area() << "\n";
    rect = Rectangle(circle.get_frame_rect());
    std::cout << rect.get_area() << "\n";
    rect = Rectangle(rect.get_frame_rect());
    std::cout << rect.get_area() << "\n";
    return 0;
}
