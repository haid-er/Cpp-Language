#include<iostream>
using namespace std;
int main()
{
    int op;
    string check;
    float a,b,result;
    system("cls");
    while(check!="-999")
    {
    cout<<"Enter 1 for sum,2 for subtraction,3 for multiplication and 4 for division"<<endl;
    cin>>op;
        if(op==1||op==2||op==3||op==4)
        {
            cout<<"Enter first value:"<<endl;
            cin>>a;
            cout<<"Enter second value:"<<endl;
            cin>>b;
                if(op==1)
                result=a+b;
                else if(op==2)
                result=a-b;
                else if(op==3)
                result=a*b;
                else if(op==4)
                result=a/b;
                else
                cout<<"Something wrong"<<endl;
            cout<<"Result="<<result<<endl;
        }
        else
        {
            cout<<"Invalid Operator."<<endl;
        }
        cout<<"Enter -999 in order to end program"<<endl;
        cin>>check;
    }
    cout<<"End of Program"<<endl;
    return 0;
}