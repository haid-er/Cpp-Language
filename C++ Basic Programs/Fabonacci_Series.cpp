#include<iostream>
using namespace std;
void fabonacci(int a)
{
    int n1=0,n2=1,n3;
    cout<<n1<<"     "<<n2<<"      ";
    for (int i = 3; i <= a; i++)
    {
        n3=n1+n2;
        cout<<n3<<"     ";
        n1=n2;
        n2=n3;
    }
    
}
int main()
{
    int number;
    system("cls");
    cout<<"Enter number of terms:"<<endl;
    cin>>number;
    fabonacci(number);
    return 0;
}