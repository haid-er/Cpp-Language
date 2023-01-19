#include<iostream>
using namespace std;
int main()
{
    int M[10],x,index;
    bool flag=0;
    system("cls");
    for(int i=1;i<=10;i++)
    {
        cout<<"Enter any Number:";
        cin>>M[i];
    }
    cout<<"Enter any number to Search : ";
    cin>>x;
    for(int i=0;i<10;i++)
    if(M[i]==x)
    {
    
        flag=1;
        index=i;
        break;    
    }
    if(flag==1)
        cout<<"Element is Present at index "<<index<<endl;
    else
        cout<<"Element is not found"<<endl;
    return 0;

}