#include<iostream>
using namespace std;
int main()
{
     int a=1,n,factorial=1;
     system("cls");
     cout<<"Enter any number:"<<endl;
     cin>>n;
     while(a<=n)
        {
            factorial=factorial*a;
            a++;
        }
    cout<<"Factorial of number = "<<factorial<<endl;
    return 0;

}