#include<iostream>
using namespace std;
int main()
{
    int x=5;
    int *ptr=&x;   //* shows that variable is Pointer
    system("cls");
    cout<<"Pointer shows the Address = "<<ptr<<endl;
    cout<<"Dereference operator = "<<*ptr<<endl; //here * shows dereference operator
    cout<<"ptr's address = "<<&ptr<<endl;
    return 0;
}