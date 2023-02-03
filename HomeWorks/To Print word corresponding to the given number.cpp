// Program to print word corresponding to the given number less than 10
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int n1 = 0, n2 = 0;
    cout << "Enter starting and ending Number : ";
    cin >> n1 >> n2;
    for (int i = n1; i <= n2; i++)
    {
        if (i <= 9)
        {
            switch (i)
            {
            case 1:
                cout << "one" << endl;
                break;
            case 2:
                cout << "two" << endl;
                break;
            case 3:
                cout << "three" << endl;
                break;
            case 4:
                cout << "four" << endl;
                break;
            case 5:
                cout << "five" << endl;
                break;
            case 6:
                cout << "six" << endl;
                break;
            case 7:
                cout << "seven" << endl;
                break;
            case 8:
                cout << "eight" << endl;
                break;
            case 9:
                cout << "nine" << endl;
            }
        }
        else
        {
            if (i % 2 == 0)
            {
                cout << "even" << endl;
            }
            else
            {
                cout << "odd" << endl;
            }
        }
    }
    return 0;
}