#include<iostream>
using namespace std;
int main()
{
    int a=0;
    system("cls");
    cout<<"Decimal    Ascii Values"<<endl;
    while(a<=255)
    {
        cout<<a<<"="<<(char)a<<"   ";
        a++;
    }

    return 0;
}