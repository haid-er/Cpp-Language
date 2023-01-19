#include<iostream>
using namespace std;
void armstrong(int number)
{
    int temp=number,rem,sum=0;
    while(number>0)
    {
        rem=number%10;
        sum=sum+rem*rem*rem;
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