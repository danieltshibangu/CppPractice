
#include <iostream>

using std::cout;
using std::endl;

int squareByValue(int);
void squareByReference(int&);

int main()
{
	int x = 2, z = 4;

	cout << "x = " << x << " before squareByValue\n" << "Value returned by squareByValue: "
		<< squareByValue(x) << endl << "x = " << x << " after squareByValue\n" << endl;

	cout << "z = " << z << " before squareByReference\n" << endl;
	squareByReference(z);
	cout << "z = " << z << " after squareByReference" << endl;

	return 0;
}


// defining the functions more?
int squareByValue(int a) {
	return a *= a;
}

void squareByReference(int& cRef) {
	cRef *= cRef;
}
