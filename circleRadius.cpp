#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const double PI = 3.14159;

// create inline circle function 
inline double circleArea(double radius = 0) { return PI * (radius * radius); }

int main()
{
	double radius;
	
	cout << "Enter radius of your circle: ";
	cin >> radius;
	cout << "Your Area: " << circleArea(radius) << endl;

	return 0;
}
