#include<iostream>
using namespace std;
int main()
{
    int M[10],smallest;
    system("cls");
    for(int i=0;i<10;i++)
    {
        cout<<"Enter any Number:";
        cin>>M[i];
    }
    smallest=M[0];
    for(int i=0;i<10;i++)
    {
        if(smallest>M[i])
            smallest=M[i];
    }
    cout<<"Smallest Number in Array : "<<smallest<<endl; 

    return 0;
}