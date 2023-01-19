#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int x=5;
    float y=9.87;
    cout<<"Address of x = "<<&x<<endl;
    cout<<"Address of y = "<<&y<<endl;
    // 0x in output shows that the next term is hexadecimal number.
    // We cant store address of float variable variable address in int varibale
    return 0;
}

