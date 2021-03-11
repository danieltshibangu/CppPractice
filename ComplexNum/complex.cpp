#include <iostream>
#include "complex.h"

using namespace std;

// use accessor to define constructor 
Complex::Complex(int leftVal, int rightVal)
{
	realPartL = leftVal;
	imaginaryPartR = rightVal;
}

void Complex::addComplex(int addLeftVal, int addRightVal)
{
	realPartL = realPartL + addLeftVal;
	imaginaryPartR = imaginaryPartR + addRightVal;
}

void Complex::subtractComplex(int subLeftVal, int subRightVal)
{
	realPartL = realPartL - subLeftVal;
	imaginaryPartR = imaginaryPartR - subRightVal;
}

void Complex::printComplex()
{
	cout << realPartL << " + " << imaginaryPartR << "i"
		<< endl;
}

// driver class to test complex numbers 
int main()
{
	Complex set1(4, 10);

	cout << "The original complex number: ";
	set1.printComplex();

	cout << "\n(";
	set1.printComplex();
	cout << ")" << " + (2 + 4i) = ";
	set1.addComplex(2, 4);
	set1.printComplex();
	return 0;
}
