#include<iostream>
using namespace std;

int main()
{
    int units,quantity,price;
    // system("cls");
    cout<<"Enter units:"<<endl;
    cin>>units;
    quantity=units*100;
    if(quantity>1000)
    {
        price=quantity-quantity*0.10;
    }
    else
    {
        price=quantity;
    }
    cout<<("Total price = ")<<price<<endl;

    return 0;
}