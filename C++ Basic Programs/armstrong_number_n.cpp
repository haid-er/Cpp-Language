#include<iostream>
#include<math.h>
using namespace std;
void armstrong(int number)
{
    int temp=number,temp1=number,i=0,rem,sum=0;
    while(temp1>0)
    {
        rem=temp1/10;
        i++;
    }
    while(number>0)
    {
        rem=number%10;
        sum=sum+ pow(rem,i);
        number=number/10;
    }
    if (sum==temp)
    {
        cout<<"The given number is an armstrong number."<<endl;
    }
    else
        cout<<"The number is not an armstrong number."<<endl;
    
}
int main()
{
    int number;
    system("cls");
    cout<<"Enter any number:"<<endl;
    cin>>number;
    armstrong(number);
    return 0;
}