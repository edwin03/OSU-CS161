/**************************************************************************************
** Program: LineSegment.hpp
** Author: Edwin Rubio
** Description: LineSegment.cpp is the LineSegment class function implementation file.
***************************************************************************************/

#include "LineSegment.hpp" //This brings in the class specification file. 

LineSegment::LineSegment(Point p1, Point p2) //Constructor that sets p1 and p2. 
{
	setEnd1(p1);
	setEnd2(p2);
}

void LineSegment::setEnd1(const Point &p11) //Sets p1
{
	p1 = p11;
}

void LineSegment::setEnd2(const Point &p22) //Sets p2
{
	p2 = p22;
}

Point LineSegment::getEnd1() //Returns p1
{
	return p1;
}

Point LineSegment::getEnd2() //Returns p2
{
	return p2;
}

double LineSegment::length() //Calculates distance from p1 to p2
{
	return p1.distanceTo(p2);
}

double LineSegment::slope() //Calculates the slope
{
	return (p2.getYCoord() - p1.getYCoord()) / (p2.getXCoord() - p1.getXCoord());
}


