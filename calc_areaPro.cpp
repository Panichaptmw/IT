#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
// define function
void DisplayMenu();
float Area(const float Radius);
float Area(const float Length, const float Width);
double Area(const double base, const double height);
int main()
{
	char Choice;
	bool Flag = true;
	do{
		DisplayMenu();
		cin >> Choice;
		if(Choice == '1'){
			float Radius;
			cout << "\n Enter Radius : ";
			cin >> Radius;
			cout << "Area of Circle = " << fixed;
			cout << setprecision(2) << Area(Radius) << endl;
		}
		else if(Choice == '2'){
			float Length,Width;
			cout << "Enter length and width : ";
			cin >> Length >> Width;
			cout << "Area of Rectangle = " << fixed;
			cout <<setprecision(2) << Area(Length,Width) << endl;
		}
		else if(Choice == '3'){
			double base,height;
			cout << "Enter base and height : ";
			cin >> base >> height;
			cout << "Area of Triangle = " << fixed;
			cout << setprecision(2) << Area(base,height) << endl;
		}
		else if(Choice == '4') Flag = false;
		else{
			cout << "\n You choose one of rang is ";
			cout << "not process.\n";
		}
	}while(Flag);
	cout << "\n . . . Exit Program . . . \n";

	return 0;

}
// create function 
//area of circle
float Area(const float Radius)
{
	return(3.14159F * Radius * Radius);
}
// function area of rectangle
float Area(const float Length, const float Width)
{
	return(Length * Width);
}
//function area of triangle
double Area(const double base, const double height)
{
	return(0.5 * base * height);
}

//display function

void DisplayMenu()
{
	cout << endl;
	cout << "Program Calculate Area " << endl;
	cout << " 1. Circle " << endl;
	cout << " 2. Rectangle " << endl;
	cout << " 3. Triangle " << endl;
	cout << " 4. Exit " << endl;
	cout << " Enter your choose number : ";
}