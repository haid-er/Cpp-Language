#include<iostream>
using namespace std;
int digitadd(int x)
{
    long int sum=0;
    for (int i = 1000000; i > 0; i=i/10)
    {
        int y=x/i;
        cout<<y%10<<"         ";g
        sum=sum+(y%10);
    }
    return sum;
    
}
int main()
{
    
    
    system("cls");
    int num;
    cout<<"Enter any number:"<<endl;
    cin>>num;
    cout<<"Sum of digits in integer = "<<digitadd(num)<<endl;
    return 0;
}