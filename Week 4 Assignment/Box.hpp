//Box.h is the box class specifitation file.
#ifndef BOX_H
#define BOX_H

class Box
{ 
   private:
    double height, width, length;

   public: 
    Box(); // this is the default constructor
    Box(double boxHeight, double boxWidth, double boxLength); // this anohter constructor 
    void setHeight (double h);
    void setWidth (double w);
    void setLength (double l);
    double getVolume();
    double getSurfaceArea();
};	  	
#endif	  

