/* Pointer is also a variable .
 It simply stores the adress of variables.   */
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int x=5;
    float y=6;
    int *ptr;
     /*asterik shows that the ptr is pointer.
     Int Data type shows that the pointer can store
      only int variables's address */
    ptr=&x;
    cout<<"The address of x is = "<<&x<<endl;
    cout<<"Ptr = "<<ptr<<endl;  
    /* Can we store an address of variable in string
    Ans= No we cant do that .*/    
    return 0;

}
