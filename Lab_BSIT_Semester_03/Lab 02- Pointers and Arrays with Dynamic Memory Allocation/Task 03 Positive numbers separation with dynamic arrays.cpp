// Header Files
#include "iostream"

using namespace std;
#define SIZE 10
int* getPositiveNumbers(const int ar[], const int size, int& newArraySize);
int main()
{
	// Variable Declarations

	int arr[SIZE];
	int newSize = 0;

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter number " << i + 1 << " : ";
		cin >> arr[i];
	}

	int* newArrPtr = getPositiveNumbers(arr, SIZE, newSize);

	if (newArrPtr == NULL)
	{
		cout << "No positive Number found." << endl;
	}
	else
	{

		cout << "Positive Numbers In Array :\n";
		for (int i = 0; i < newSize; i++)
		{
			cout << *(newArrPtr + i) << "\t";
		}
	}
	delete [] newArrPtr;
	return 0;
}
int* getPositiveNumbers(const int ar[], const int size, int& newArraySize)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (ar[i] > 0)
			newArraySize++;
	}
	if (newArraySize == 0)
		return NULL;

	int* arrNew = new int[newArraySize];

	for (int i = 0; i < size; i++)
	{
		if(ar[i] > 0)
		{
			arrNew[count] = ar[i];
			count++;
		}
	}
	return arrNew;

}