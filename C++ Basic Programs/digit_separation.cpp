#include<iostream>
using namespace std;
void separatedigit(int x)
{
    for (int i = 100000; i > 0; i=i/10)
    {
        int y=x/i;
        cout<<y%10<<"      ";
    }
    
}
int main()
{
    
    
    system("cls");
    int num;
    cout<<"Enter any number:"<<endl;
    cin>>num;
    separatedigit(num);
    return 0;
}