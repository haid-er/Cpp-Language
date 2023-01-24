// Header Files
#include "iostream"

using namespace std;


int main()
{
	
	// Variable Declarations
	
	float *ptrX = NULL, *ptrY = NULL;
	float *x = new float(4.5);
	float* y = new float(9.3);
	ptrX = x;
	ptrY = y;
	cout << "Address of ptrX = " << &ptrX << endl << "Value of ptrX = " << ptrX << endl << "The value at address where ptrX point = " << *ptrX << "\n\n";
	cout << "Address of ptrY = " << &ptrY << endl << "Value of ptrY = " << ptrY << endl << "The value at address where ptrY point = " << *ptrY << endl;

	delete x;
	delete y;

	return 0;
}