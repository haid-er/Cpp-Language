#include<iostream>
using namespace std;
int main()
{
    int n,a=1,b=0;
    system("cls");
    cout<<"Enter any Number"<<endl;
    cin>>n;
    while(a<=n)
    {
        if(n%a==0)
        {
            b++;
        }
        a++;
    }
    if(b==2)
    {
        cout<<"Entered number is Prime number."<<endl;
    }
    else
    {
        cout<<"Entered number is not a Prime number"<<endl;
    }


    return 0;
}
