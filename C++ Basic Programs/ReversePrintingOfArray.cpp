#include<iostream>
using namespace std;
int main()
{
    int M[10];
    system("cls");
    for(int i=0;i<=9;i++)
    {
        cout<<"Enter any Number:";
        cin>>M[i];
    }
    for(int i=9;i>=0;i--)
        cout<<M[i]<<endl;
    return 0;
}