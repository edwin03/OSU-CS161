//Box.cpp is the Box class function implementation file.

#include "Box.hpp" //This brings in the class specification file. 

Box::Box() //Default constructor and sets the 3 parameters to 1. 
{
	setHeight(1.0);
	setWidth(1.0);
	setLength(1.0);
}

Box::Box(double boxHeight, double boxWidth, double boxLength) //The three-parameter constructor that takes the parameters and sends it to the set methods.
{
	setHeight(boxHeight); 
	setWidth(boxWidth); 
	setLength(boxLength); 
}

void Box::setHeight (double h) //sets height
{
	height = h;
}

void Box::setWidth (double w) //Sets width
{
	width = w; 
}

void Box::setLength (double l) //Sets length
{
	length = l;
}

double Box::getVolume() //Calculates volume
{
	return height*width*length;
}

double Box::getSurfaceArea()//Calculates the surface area
{
	return (2*(height*width)) + (2*(width*length)) + (2*(length*height));
}	
   
