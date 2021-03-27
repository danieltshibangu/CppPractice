#include <iostream>
#include "rational.h"

using namespace std;

// implementing the functions of Rational class 
Rational::Rational(int top, int bottom)		// constructor
{
	numer = top;
	// avoid zero in denominator
	denom = (bottom != 0) ? bottom : 1;
}

 void Rational::addRational(int addTop, int addBottom)
{
	 // add for like denominators 
	 if (addBottom == denom) {
		 numer = numer + addTop;
	 }
	 else {
		 // add numbers with unlike denominators
		 int commFactor;
		 
		// create an algorithm for adding unlike numbers
		commFactor = addBottom * denom;
		int firstOP = commFactor / denom * numer;
		int secondOP = commFactor / addBottom * addTop;

		numer = firstOP + secondOP;
		denom = commFactor;
	 }
}

 void Rational::ratioPrint()
 {
	 cout << "(" << numer << "/" << denom << ")" << endl;
 }

 int main()
 {
	 Rational fraction1(2, 1);
	 fraction1.ratioPrint();
	 fraction1.addRational(2, 2);
	 fraction1.ratioPrint();

	 return 0;
 }
