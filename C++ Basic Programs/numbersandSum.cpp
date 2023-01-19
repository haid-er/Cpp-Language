#include<iostream>
using namespace std;
int main()
{
    int a=1,n,sum=0;
    system("cls");
    cout<<"Input number of terms:"<<endl;
    cin>>n;
    cout<<"Natural numbers upto "<<n<<"th term are:"<<endl;
    while(a<=n)
    {
        cout<<a<<endl;
        sum=sum+a;
        a++;
    }
    cout<<"The sum of natural numbers is:"<<sum<<endl;
    return 0;
}