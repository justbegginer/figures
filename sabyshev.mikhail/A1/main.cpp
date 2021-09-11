#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

int main() {
  Rectangle rect(Rectangle_s(Point(0, 0), 1, 1));
  Circle circle(Point(0, 0), 1);
  std::cout << rect.get_area() << "\n";
  std::cout << circle.get_area() << "\n";
  rect = Rectangle(circle.get_frame_rect());
  std::cout << rect.get_area() << "\n";
  rect = Rectangle(rect.get_frame_rect());
  std::cout << rect.get_area() << "\n";
  Triangle triangle(Point(3 , 2) , Point(9 ,2) , Point(6 ,6));
  triangle.move(Point(3 , 4));
  std::cout << triangle.get_area() << "\n";
  return 0;
}


