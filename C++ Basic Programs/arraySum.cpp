#include<iostream>
using namespace std;
int main()
{
    int M[10],sum=0;
    system("cls");
    for(int i=0;i<10;i++)
    {
        cout<<"Enter any Number:";
        cin>>M[i];
        sum=sum+M[i];
    }
    cout<<"Sum of Numbers:"<<sum<<endl;
     
    return 0;
}