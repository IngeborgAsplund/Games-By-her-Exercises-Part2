#include"shapes.h"
 //the base functionality of a shape to take in two doubles for withdt and height.
void Shape::SetWidthAndHeight(double inwidth,double inheight) 
 {
    width = inwidth;
    height = inheight;
 }
//function that calculate the area, in a general object of type shape 
 double Shape::CalculateArea() { return 0.0; }

 double Rectangle::CalculateArea()
 {
     return width * height;
 }
 double Triangle::CalculateArea()
 {
     return width * height * 0.5;
 }
