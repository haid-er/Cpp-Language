#include<iostream>
using namespace std;
int main()
{
    int n,a;
    float avg,sum;
    sum=avg=0;
    n=1;a=0;  
    system("cls");
    while(n>0)
    {
        cout<<"Enter interger:";
        cin>>n;
        if(n<0)
            break;
        a++;
        sum=sum+n;
    }
    avg=sum/a;
    cout<<"Average of given numbers = "<<avg;
    return 0;
}