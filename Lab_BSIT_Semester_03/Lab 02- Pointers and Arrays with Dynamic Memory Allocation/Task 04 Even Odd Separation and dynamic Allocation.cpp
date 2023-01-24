// Header Files
#include "iostream"

using namespace std;
#define SIZE 10
void getEvenOdd(const int ar[], const int n_ar, int* &even, int &n_even,int* &odd,int &n_odd);
int main()
{
	// Variable Declarations

	int arr[SIZE] = { 34,63,54,55,56,57,86,98,75,10 };
	int* even = NULL;
	int* odd = NULL;
	int sizeEven = 0, sizeOdd = 0;
	getEvenOdd(arr, SIZE, even, sizeEven, odd, sizeOdd);
	if (even == NULL)
	{
		cout << "No odd Numbers found ! " << endl;
	}
	else
	{
		cout << "Odd numbers : " << endl;
		for (int i = 0; i < sizeOdd; i++)
		{
			cout << odd[i] << "\t";
		}
	}
	if (odd == NULL)
	{
		cout << "No even Numbers found ! " << endl;
	}
	else
	{
		cout << endl << "Even numbers : " << endl;
		for (int i = 0; i < sizeEven; i++)
		{
			cout << even[i] << "\t";
		}

	}

	delete[] even;
	delete[] odd;
	return 0;
}

void getEvenOdd(const int ar[], const int n_ar, int* &even, int& n_even, int* &odd, int& n_odd)
{
	int count1 = 0, count2 = 0;
	for (int i = 0; i < n_ar; i++)
	{
		if (ar[i] %2 == 0)
		{
			n_even++;
		}
		else
		{
			n_odd++;
		}
	}
	

	int* arrNewEven = new int[n_even];
	int* arrNewOdd = new int[n_odd];

	for (int i = 0; i < n_ar; i++)
	{
		if (ar[i] % 2 == 0)
		{
			arrNewEven[count1] = ar[i];
			count1++;
		}
		else
		{
			arrNewOdd[count2] = ar[i];
			count2++;
		}
	}
	even = arrNewEven;
	odd = arrNewOdd;
	if (n_even == 0)
		even = NULL;
	if (n_odd == 0)
		odd = NULL;
	
}