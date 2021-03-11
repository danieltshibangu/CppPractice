// creating complex class
# define COMPLEX_H	

// create complex class 
class Complex
{
public:
	Complex(int = 0, int = 0);		// constructor for complex num: ex: 12 + 9i
	void addComplex(int, int);		// Ex: (12 + 5i ) + (3 + 2i)
	void subtractComplex(int, int);	// Ex: (5 + 2i) - (1 + 8i ) 
	void printComplex(int, int);
private:
	double realPartL;         // real number on the left
	double imaginaryPartR;    // imaginary number on the right
};
