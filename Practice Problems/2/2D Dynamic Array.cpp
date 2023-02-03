#include "iostream"

using namespace std;
int main()
{
	int row, col;
	row = col = 0;
	cout << "Enter number of Rows : ";
	cin >> row;
	cout << "Enter number of Cols : ";
	cin >> col;
	int **arr = new int *[row];
	for (int i = 0; i < row; i++)
	{
	 	arr[i] = new int[col];
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Enter number for ( " << i << " , " << j << " ) : ";
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}

	for (int i = 0; i < row; i++)
	{
		delete[] arr[i];
	}
	return 0;
}