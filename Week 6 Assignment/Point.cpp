/*************************************************************************
** Program: Point.cpp
** Author: Edwin Rubio
** Description: Point.cpp is the Point class function implementation file.
**************************************************************************/

#include "Point.hpp" //This brings in the class specification file. 
#include <math.h> //Used for sqrt and pow functions. 

Point::Point() //Default constructor and sets the 2 parameters to 0. 
{
	setXCoord(0);
	setYCoord(0);
}

Point::Point(double x, double y) //The two-parameter constructor that takes the parameters and sends it to the set methods.
{
	setXCoord(x);
	setYCoord(y);
}

void Point::setXCoord(double x) //Sets x coordinate
{
	xCoord = x;
}

void Point::setYCoord(double y) //Sets y coordinate
{
	yCoord = y; 
}

double Point::getXCoord() //Returns x coordinate
{
	return xCoord;
}

double Point::getYCoord() //Returns y coordinate
{
	return yCoord;
}

double Point::distanceTo(const Point& secPoint ) //Calculates the distance
{
	double x1, x2, y1, y2;
	double distX, distY, distSq, dist; 

	x1 = xCoord;
	x2 = secPoint.xCoord;
	y1 = yCoord;
	y2 = secPoint.yCoord;
	distX = x1 - x2;
	distY = y1 - y2;
	distSq = pow(distX, 2) + pow(distY, 2);
	dist = sqrt(distSq);

	return dist;
}	
   
