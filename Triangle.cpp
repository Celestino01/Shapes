#include<iostream>


using namespace std;

//Triangle class declaration
class Triangle
{
	private:
		double base,
			   height;
	public:
		void setBase(double);
		void setHeight(double);
		double getBase();
		double getHeight();
		double calcArea();

};

//Member function implementation

/********************************************************************
* Triangle::setBase
*
* This function sets the value of the member variable base.
*
* If the argument passed to the function is zero or greater, it
*
* copied into length. If it is negative, 1.0 is assigned to
  
* length.
********************************************************************/
void Triangle::setBase(double b)
{
	if(b < 1)
	{
		cout << "Invalid value, base will be set to 1" << endl;
		base = 1;
	}
	else
		base = b;
}

/********************************************************************
* Triangle::setHeight
*
* This function sets the value of the member variable height.
*
* If the argument passed to the function is zero or greater, it
*
* copied into length. If it is negative, 1.0 is assigned to
  
* length.
********************************************************************/
void Triangle::setHeight(double h)
{
	if(h < 1)
	{
		cout << "Invalid value, height will be set to 1" << endl;
		height = 1;
	}
	else
		height = h;
}

/**************************************************************
 * Tringle::getBase *
 * This function returns the value in member variable base. *
 **************************************************************/
double Triangle::getBase()
{
	return base;
}

/**************************************************************
 * Tringle::getHeight *
 * This function returns the value in member variable height. *
 **************************************************************/
double Triangle::getHeight()
{
	return height;
}

/**************************************************************
 * Triangle::calcArea *
 * This function calculates the area of the triangle. *
 **************************************************************/
double Triangle::calcArea()
{
	return 0.5*base*height;
}


int main()
{
	Triangle tri;

	tri.setBase(5.0);
	tri.setHeight(2.5);

	cout << tri.getBase() << endl;
	cout << tri.getHeight() << endl;

	cout << tri.calcArea();

}
