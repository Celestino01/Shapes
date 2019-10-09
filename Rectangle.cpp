#include <iostream>

using namespace std;

//Rectangle class declaration 

class Rectangle
{
	private:
		double length,
			   width;

	public:
		void setWidth(double);
		void setLength(double);
		double getWidth();
		double getLength();
		double calcArea();
};

//Member fuction implementation section

/********************************************************************
* Rectangle::setWidth
*
* This function sets the value of the member variable length.
*
* If the argument passed to the function is zero or greater, it
*
* copied into length. If it is negative, 1.0 is assigned to
  
* length.
********************************************************************/

void Rectangle::setWidth(double w)
{
	if(w < 1)
	{
		cout << "Value is invalid, default value set to 1." << endl;
		width = 1;
	}
	else
		width = w;
}
/********************************************************************
* Rectangle::setLength
*
* This function sets the value of the member variable length.
*
* If the argument passed to the function is zero or greater, it
*
* copied into length. If it is negative, 1.0 is assigned to
  
  length.
********************************************************************/
void Rectangle::setLength(double l)
{
	if(l<1)
	{
		cout << "Value is invalid, default value set to 1" << endl;
	}
	else 
		length = l;
}
/**************************************************************
 * Rectangle::getWidth *
 * This function returns the value in member variable width. *
 **************************************************************/
double Rectangle::getWidth()
{
	return width;
}
/**************************************************************
 * Rectangle::getLength *
 * This function returns the value in member variable length. *
 **************************************************************/
double Rectangle::getLength()
{
	return length;
}
/**************************************************************
 * Rectangle::calcArea *
 * This function calculates the area of the rectangle. *
 **************************************************************/
double Rectangle::calcArea()
{
	return length * width;
}

//The main function can be used as you please 

int main()
{
	//declared an object from the Rectangle class
	Rectangle rec;

	//set length and width
	rec.setLength(2.0);
	rec.setWidth(2.0);

	//prints the length and width that was set
	cout << rec.getLength() << endl;
	cout << rec.getWidth() << endl;

	//prints out the area 
	cout << rec.calcArea();

}