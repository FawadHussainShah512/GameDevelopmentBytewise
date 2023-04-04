#include <iostream>
#include <cmath>
using namespace std;
class Circle
{
public:
 Circle();
 Circle(double r);
 void setRadius(double r);
 double getRadius();
 double getArea();
private:
 double radius;
};
Circle::Circle()
{
 radius = 0;
}
Circle::Circle(double r)
{
 radius = r;
}
void Circle::setRadius(double r)
{
 radius = r;
}
double Circle::getRadius()
{
 return radius;
}
double Circle::getArea()
{
 return 3.14159 * pow(radius, 2);
}
class Cylinder : public Circle
{
public:
 Cylinder();
 Cylinder(double r, double h);
 void setHeight(double h);
 double getHeight();
 double getVolume();
private:
 double height;
};
Cylinder::Cylinder()
{
 height = 0;
}
Cylinder::Cylinder(double r, double h) : Circle(r)
{
 height = h;
}
void Cylinder::setHeight(double h)
{
 height = h;
}
double Cylinder::getHeight()
{
 return height;
}
double Cylinder::getVolume()
{
 return getArea() * height;
}
void welcome(){
 cout<<"WELCOME USER TO PROGRAM"<<endl;
 cout<<"'''''''''''''''''''''''''''''''''"<<endl;
 
}
void end(){
 cout<<"THANK YOU FOR USING SERVICE"<<endl;
 cout<<"'''''''''''''''''''''''''''''''''"<<endl;
 
}
int main()
{
 welcome();
 double radius, height;
 cout << "Enter the radius of the circle: ";
 cin >> radius;
 cout << "Enter the height of the cylinder: ";
 cin >> height;
 Circle circle(radius);
 Cylinder cylinder(radius, height);
 cout << "The area of the circle is " << circle.getArea() << endl;
 cout << "The volume of the cylinder is " << cylinder.getVolume() << endl;
 end();
 return 0;
}
