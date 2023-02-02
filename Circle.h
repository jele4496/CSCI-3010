#ifndef _CIRCLE_H_
#define _CIRCLE_H_



// Example function for the beginning tests
// Really, it shouldn't be in a Circle header file but we
// wanted you to get started
unsigned int Factorial( unsigned int number );


struct Point {
  int x;
  int y;
};


class Circle {
public:
  // p is the center of the circle
  // rad is the radius of the circle
  Circle(Point p, int rad);

  //returns the radius of the circle
  int get_radius() const { return radius_; };

  //returns the center of the circle
  Point get_center() const { return center_; }

  // returns true iff this circle shares any points with the other one
  bool Overlaps(Circle& other);

  // returns the area of this circle
  int CalculateArea();

  // increases the radius by one
  void Expand();

  // decreases the radius by one
  void Shrink();

private:
  Point center_;
  int radius_;
};


#endif // _CIRCLE_H_
