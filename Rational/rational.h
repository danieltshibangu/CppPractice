// rational class for performing arithemtic with fractions 
#define RATIONAL_

class Rational {
public:
	Rational(int, int);			// constructor, takes initial fraction 
	void addRational(int, int);	// takes fraction to be added by in param
	void subRational(int, int);	// subtraction
	void multRational(int, int); // multiplication
	void divRational(int, int);  // division
	void ratioPrint();			// printing in form (a, b)
	double decimalPrint();		// printing in decimal form 
private:
	int numer;
	int denom;
};
