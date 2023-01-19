#include<iostream>
using namespace std;
int greatest(int a,int b, int c)
{
    if(a>b)
        if(a>c)
            return a;
        else 
            return c;
    else if(b>c)
        return b;
    else
        return c;
    
}
int main()
{
    int p,q,r;
    system("cls");
    for (int i = 1; i >0 ; i++)
    {
    
        cout<<"Enter any 3 interger numbers:"<<endl;
        cin>>p>>q>>r;
        if(p==q||q==r||p==r)
            {
                cout<<"Some intergers are equal.Try again some other integers."<<endl;
                continue;
            }
        else
            break;  
    }
    cout<<greatest(p,q,r)<<" is the greatest number.";
    return 0;

}