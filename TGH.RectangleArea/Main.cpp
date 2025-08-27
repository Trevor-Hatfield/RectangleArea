//Trevor Hatfield
//Calculate Area of a Rectangle Project
//C++ 08/26/2025

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	double length;
	double width;
	double area;
	
	GetLengthFromUser(); //Receive length from user and define variable length
	GetWidthFromUser(); //Receive width from user and define variable width
	CalculateArea(length, width); //Pass arguments to calculate area
	DisplayArea(area);

	(void)_getch();
	return 0;
}

double GetLengthFromUser()
{
	double length;
	cout << "Please enter the length: ";
	cin >> length;
	return length;
}

double GetWidthFromUser()
{
	double width;
	cout << "Please enter the width: ";
	cin >> width;
	return width;
}

double CalculateArea(double length, double width)
{
	if (length > 0 && width > 0) //Make sure user input is positive and not 0
	{
		double area = length * width;
		return area;

	}
	else
	{
		cout << "Please enter only positive numbers.";
	}
}

void DisplayArea(double area)
{
	cout << "The area of the rectangle is: " << area << "\n";
}
