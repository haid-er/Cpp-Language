// Program to find largest number among given four numbers
#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    if (a >= b && a >= c && a >= d)
    {
        return a;
    }
    else if (b >= a && b >= c && b >= d)
    {
        return b;
    }
    else if (c >= a && c >= b && c >= d)
    {
        return c;
    }
    else
    {
        return d;
    }
}

int main() {
    int a, b, c, d;
    cout << "Enter any four Numbers : ";
    cin >> a >> b >> c >> d;
    int ans = max_of_four(a, b, c, d);
    cout << "The Largest Number : " << ans << endl;

    return 0;
}