#include<iostream>
using namespace std;

int greatest(int a, int b,int c)
{
    if(a>b&&a>c)
        return a;
    else if (b>a&&b>c)
        return b;
    else if (c>a&&c>b)
        return c;
}

int main()
{
    int x,y,z;
    system("cls");
    cout<<"Enter any 3 integers:"<<endl;
    cin>>x>>y>>z;
    cout<<greatest(x,y,z)<<" is the greatest integer."<<endl;
    return 0;
 
}