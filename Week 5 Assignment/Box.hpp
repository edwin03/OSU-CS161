s
//Box.h is the Box class specification file.
#ifndef BOX_HPP //This is the inlcude gaurd, to prevent the header file form accidentally being included more than once. 
#define BOX_HPP

class Box
{ 
   private:
    double height, width, length; //The private parameter members

   public: 
    Box(); //This is the default constructor
    Box(double boxHeight, double boxWidth, double boxLength); //This anohter constructor that takes the 3 parameters and sends it to the set methods. 
    void setHeight (double h); //Sets the height
    void setWidth (double w); //Sets the width
    void setLength (double l); //Sets the length
    double getVolume(); //Calculates the volume
    double getSurfaceArea(); //Calculates the surface area
};	  	
#endif	  

