#include<iostream>
using namespace std;
int main()
{
    int M[10],largest;
    system("cls");
    for(int i=0;i<10;i++)
    {
        cout<<"Enter any Number:";
        cin>>M[i];
    }
    largest=M[0];
    for(int i=0;i<10;i++)
    {
        if(M[i]>largest)
            largest=M[i];
    }
    cout<<"Largest Number in Array : "<<largest<<endl; 

    return 0;
}