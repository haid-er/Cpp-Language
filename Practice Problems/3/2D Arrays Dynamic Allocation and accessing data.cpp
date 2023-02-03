#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    n = q = 0;
    cout << "Please Enter number of sub Arrays : ";
    cin >> n;
    int** arr = new int* [n];
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp = 0;
        cout << "Enter number of element in sub array " << i + 1 << " : ";
        cin >> temp;
        arr[i] = new int[temp];
        for (int j = 0; j < temp; j++)
        {
            cout << "Enter element " << j + 1 << " of array " << i + 1 << " : ";
            cin >> arr[i][j];
        }
    }
    
    cout << "Please Enter number of enteries you want to view : ";
    cin >> q;
    
    int i, j;
    for (int k = 0; k < q; k++)
    {
        i = j = 0;
        cout << "Enter array number : ";
        cin >> i;
        cout << "Enter element number of array " << i + 1 << " : ";
        cin >> j;
        i--; j--;
        cout << arr[i][j] << endl;

    }
    
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}