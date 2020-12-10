#pragma once
#include<iostream>
#include<string>
// a number of objects of type shape is defined in this headerfile
class Shape
{
public:
	void SetWidthAndHeight(double inwidth, double inheigth);
	virtual double CalculateArea();
protected:
	double width, height;
};
class Rectangle:public Shape
{
public:
	 double CalculateArea()override;
};
class Triangle:public Shape
{
public:
	double CalculateArea()override;
};