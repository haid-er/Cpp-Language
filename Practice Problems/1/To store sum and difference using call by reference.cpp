#include "iostream"
using namespace std;

void update(int* a, int* b) {
    // Complete this function    
    int temp = *a;
    *a = *a + *b;
    *b = temp - *b;
    if (*a < 0)
    {
        *a = *a * -1;
    }
    if (*b < 0)
    {
        *b = *b * -1;
    }

}

int main() {
    int a, b;
    int* pa = &a, * pb = &b;

    cout << "Enter any two values : ";
    cin >> a >> b;
    update(pa, pb);
    cout << "| a + b | = " << a << endl;
    cout << "| a - b | = " << b << endl;

    return 0;
}