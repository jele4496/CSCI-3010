#include "Circle.h"
#include <cmath>

Circle::Circle(Point p, int rad)
: center_{p},
radius_{rad} {
if (rad < 0)
radius_ = 0;
}

bool Circle::Overlaps(Circle& other) {
  int x_distance = center_.x - other.center_.x;
  int y_distance = center_.y - other.center_.y;
  int distance = pow(x_distance * x_distance + y_distance * y_distance, 0.5);
  return distance <= (radius_ + other.radius_);
}


int Circle::CalculateArea() {
return static_cast<int>(M_PI * pow(radius_, 2));
}

void Circle::Expand() {
if (radius_ >= 0)
++radius_;
}

void Circle::Shrink() {
if (radius_ > 0)
--radius_;
}