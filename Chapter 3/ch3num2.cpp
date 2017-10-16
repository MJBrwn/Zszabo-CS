
/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 5th Edition
 Chapter 3 - Exercise 2

 Consider the following C++ program in which the statements are in the incorrect order.
 Rearrange the statements so that it prompts the user to input the radius and
 height of a cylinder and output the area and perimeter of the cylinder.

}
*****************************************************************************/


#include <iomanip>
#include <cmath>
#include <iostream>

using namespace std;

const double PI = 3.14159;

int main()
{

    //Initialize variables
	double height, radius;

	//Find radius
    cout << "Enter the radius of the base of the cylinder (cm): ";
        cin >> radius;
        cout << endl;

    //Find height
	cout << "Enter the height of the cylinder (cm): ";
        cin >> height;
        cout << endl;


	//Volume of Cylinder
	cout << "Volume of the cylinder in centimeters = "

		<< fixed << showpoint << setprecision(2)
		<< PI * pow(radius, 2.0)* height << endl;



    //Surface area of Cylinder
		cout << "Surface area: "

		<< 2 * PI * radius * height + 2 * PI * pow(radius, 2.0)
		<< endl;
	cout << fixed << showpoint << setprecision(2);
}



