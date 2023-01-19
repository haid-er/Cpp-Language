#include<iostream>
using namespace std;
int main()
{
    int M[10];
    system("cls");
    for(int i=0;i<10;i++)
    {
        cout<<"Enter any Number:";
        cin>>M[i];
    }
    for(int i=0;i<10;i++)
        cout<<M[i]<<endl;
    return 0;
}