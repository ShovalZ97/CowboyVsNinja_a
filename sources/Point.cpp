#include "Point.hpp"

using namespace ariel;

// Default Constructor
Point::Point()
{
}
// Parameterized Constructor
Point::Point(double x11, double y11)
{
}
//Get a point and calculate the distance between the two points
double Point::distance(Point p)
{
    return 0.0; 
}
//The function returns the closest point to the destination point, - is at most the given distance from the source point
Point Point::moveTowards(Point source, Point destination, double distance)
{
    return Point(); 
}
//Prints the two coordinates in parentheses.
void Point::print()
{
}
double Point ::getX()
{
    return this->x1;
}
double Point ::getY()
{
    return this->y1;
}
