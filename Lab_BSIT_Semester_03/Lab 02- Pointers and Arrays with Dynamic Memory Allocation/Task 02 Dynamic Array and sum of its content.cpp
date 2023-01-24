// Header Files
#include "iostream"

using namespace std;


int main()
{
	// Variable Declarations
	
	int size = 0,sum = 0;
	do
	{
		cout << "Enter size of array : ";
		cin >> size;
		if (size <= 0)
			cout << "Invalid Input ! ";
	} while (size <= 0);

	// dynamic array
	int* arr = new int[size];
	
	for (int i = 0; i < size; i++)
	{
		cout << "Enter number " << i + 1 << " : ";
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	cout << "Sum of given numbers : " << sum << endl;


	delete [] arr;

	return 0;
}