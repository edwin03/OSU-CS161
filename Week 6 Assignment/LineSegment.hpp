/****************************************************************************
** Program: LineSegment.hpp
** Author: Edwin Rubio
** Description: LineSegment.hpp is the LineSegment Class specification file.
*****************************************************************************/

#include "Point.hpp" //This brings in the Point.hpp class specification file. 
#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

class LineSegment
{
private:
	Point p1, p2; //The private parameter members

public:
	LineSegment(Point p1, Point p2); //Constructor that sets p1 and p2. 
	void setEnd1(const Point &p11); //Sets p1
	void setEnd2(const Point &p22); //Sets p2
	Point getEnd1(); //Returns p1
	Point getEnd2(); //Returns p2
	double length(); //Calculates distance from p1 to p2
	double slope(); //Calculates the slope

};
#endif



  
  
