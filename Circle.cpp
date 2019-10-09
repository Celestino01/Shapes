#include<iostream>
#include<cmath>

using namespace std;

//Circle class declaration
class Circle
{
	private:
		double radius;

	public:
		void setRadius(double);
		double getRadius();
		double calcArea();
};

//Member function implementation

/********************************************************************
* Circle::setRadius
*
* This function sets the value of the member variable radius.
*
* If the argument passed to the function is zero or greater, it
*
* copied into length. If it is negative, 1.0 is assigned to
  
* length.
********************************************************************/


void Circle::setRadius(double r)
{
	if(r < 1)
	{
		cout << "Invalid value. Value set to 1" <<endl;
		radius = 1;
	}
	else
	{
		radius = r;
	}
}

/**************************************************************
 * Circle::getRadius *
 * This function returns the value in member variable radius. *
 **************************************************************/

double Circle::getRadius()
{
	return radius;
}

/**************************************************************
 * Circle::calcArea *
 * This function calculates the area of the circle. *
 **************************************************************/

double Circle::calcArea()
{
	return radius * pow(radius, 2);
}

int main()
{
	Circle cir;

	cir.setRadius(5);

	cout << cir.getRadius() << endl;

	cout << cir.calcArea() << endl;

}
