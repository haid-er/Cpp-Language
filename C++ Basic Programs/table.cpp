#include<iostream>
using namespace std;
int main()
{
    
    int a=1,n;
    system("cls");
    cout<<"Enter any number:"<<endl;
    cin>>n;
    while(a<=10)
    {
        cout<<n<<" * "<<a<<"= "<<n*a<<endl;
        a++;
    }
    return 0;
}