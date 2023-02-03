#include "iostream"

using namespace std;
int main()
{

	int size;
	size = 0;
	cout << "Enter size of Array : " << endl;
	cin >> size;

	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		cout << "Enter Number " << i + 1 << " : ";
		cin >> arr[i];
	}
	cout << "ARRAY CONTENT : " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}

	
	delete[] arr;
	return 0;
}