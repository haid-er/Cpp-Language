#include "iostream"
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 0;
    cout << "Enter size of array : ";
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Number " << i+1 << " : ";
        cin >> arr[i];
    }
    cout << "In reverse order : " << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}