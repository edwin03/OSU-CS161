/*************************************************************************
** Program: Point.hpp
** Author: Edwin Rubio
** Description: Point.hpp is the Point Class specification file.
**************************************************************************/

#ifndef POINT_HPP //This is the include gaurd, to prevent header file form accidentally being included more than once. 
#define POINT_HPP

class Point
{
  private:
  double xCoord, yCoord; //The private parameter members

  public: 
  Point(); //This is the default private constructor that set the coordinates to 0. 
  Point(double x, double y); //This is another constructor that takes 2 paramters and sends it to the set methods.  
  void setXCoord(double x); //Sets x coordinate
  void setYCoord(double y); //Sets y coordinate
  double getXCoord(); //Returns x coordinate
  double getYCoord(); //Returns y coordinate
  double distanceTo(const Point&); //Calculates the distance  
};
#endif
      	

