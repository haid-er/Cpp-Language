#include<iostream>
using namespace std;

int main()
{
    int a,b;
    system("cls");
    cout<<"Enter any two value:"<<endl;
    cin>>a>>b;
    if(a>b)
        cout<<("The Greatest value is:")<<a<<endl;
    else if(a==b)
        cout<<("Both values are equal")<<endl;
    else   
        cout<<("The Greatest value is:")<<b<<endl;

    return 0;

}