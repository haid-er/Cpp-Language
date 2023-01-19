#include<iostream>
using namespace std;
int main()
{
    int n;
    system("cls");
    cout<<"Enter your marks:"<<endl;
    cin>>n;
    if(n<50)
        cout<<"F"<<endl;
    else if(n<=54)
        cout<<"D"<<endl;
    else if(n<=57)
        cout<<"C-"<<endl;
    else if(n<=60)
        cout<<"C"<<endl;
    else if(n<=64)
        cout<<"C+"<<endl;
    else if(n<=69)
        cout<<"B-"<<endl;
    else if(n<=74)
        cout<<"B"<<endl;
    else if(n<=79)
        cout<<"B+"<<endl;
    else if(n<=84)
        cout<<"A-"<<endl;
    else 
        cout<<"A"<<endl;
    return 0;
}