#include<iostream>
using namespace std;
int main()
{
    int M[10],n,n1=0;
    system("cls");
    for(int i=0;i<10;i++)
    {
        cout<<"Enter any Number:";
        cin>>M[i];
    }
    cout<<"Enter any Number to Search : ";
    cin>>n;
    for(int i=0;i<=10;i++)
    {
        if(M[i]==n)
        {
            cout<<"Number exists in Array."<<endl;
            break;       
        }
        if(i==10)
        cout<<"Number does not exist in Array."<<endl;
    }
    return 0;
}