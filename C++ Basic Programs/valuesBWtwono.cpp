#include<iostream>
using namespace std;
int main()
{
    int a,b;
    a=b=0;    
    system("cls");
    cout<<"Enter first value:"<<endl;
    cin>>a;
    cout<<"Enter second value:"<<endl;
    cin>>b;
    cout<<"Numbers between "<<a<<" and "<<b<<" are as follow:"<<endl;
    while(a<=b)
    {
        cout<<a<<endl;
        a++;
    }

    return 0;
}