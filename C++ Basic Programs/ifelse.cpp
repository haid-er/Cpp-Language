#include<iostream>
using namespace std;

int main()
{
    int marks;
    system("cls");
    cout<<"Enter your marks:"<<endl;
    cin>>marks;
    if(marks>=50)
        cout<<"Pass"<<endl;
    else
        cout<<"Fail"<<endl;
    
    return 0;
}