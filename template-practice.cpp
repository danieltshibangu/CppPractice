#include <iostream>

using std::cout;
using std::endl;

template<class A>
A min(A value1, A value2) 
{ 
	if (value1 < value2)
		return value1; 
	else 
		return value2; 
}


int main()
{
	// using int with template
	int int1 = 5, int2 = 10;
	cout << min(int1, int2) << " is smallest between " << int1 << " and "
		<< int2 << "." << endl;

	// using char with template 
	char char1 = 'f', char2 = '&';
	cout << min(char1, char2) << " is the smaller character between " << char1
		<< " and " << char2 << "." << endl;

	// using float with template 
	float float1 = 8.009, float2 = 8.008;
	cout << min(float1, float2) << " is the smaller float between " << float1 << " and "
		<< float2 << "." << endl;

	return 0;
}
