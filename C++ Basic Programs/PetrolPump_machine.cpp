#include<iostream>
using namespace std;

void liters(int a)
{
    float ltr,bill;
    cout<<"Enter Liters:";
    cin>>ltr;
    bill=a*ltr;
    cout<<"Your bill is "<<bill<<" for "<<ltr<<" liters."<<endl;
}
void rupees(int a)
{
    float rupees,ltr;
    cout<<"Enter amount in Rupees:";
    cin>>rupees;
    ltr=rupees/a;
    cout<<"You are given "<<ltr<<" liters for "<<rupees<<" rupees."<<endl;
}
void keyboard(int a)
{
int LR=0;
                
                for (int i = 1; i >0; i++)
                {
                    cout<<"Press 1 for Liters and 2 for Rupees:";
                    cin>>LR;
                    if(LR==1)
                            { liters(a);break; }

                    else if(LR==2)
                            { rupees(a);break; }
                    else
                            { cout<<"Invalid Input. Try again." <<endl;continue;    } 

                }
}
void P1(float a)
{
    int ltr=100.0/a;
    cout<<"You are given "<<ltr<<" liters for 100 rupees."<<endl;
}
void P2(float a)
{
    int ltr=200.0/a;
    cout<<"You are given "<<ltr<<" liters for 200 rupees."<<endl;
}void P3(float a)
{
    int ltr=300.0/a;
    cout<<"You are given "<<ltr<<" liters for 300 rupees."<<endl;
}void P4(float a)
{
    int ltr=400.0/a;
    cout<<"You are given "<<ltr<<" liters for 400 rupees."<<endl;
}



int main()
{
    int price_of_liter=150;
    char ch1;
    system("cls");
    for (int i = 1; i >0; i++)
    {
    
        
        cout<<"Enter"<<endl<<"1 for P1."<<endl<<"2 for P2."<<endl<<"Enter 3 for P3."<<endl<<"Enter 4 for P4."<<endl<<"5 for keyboard INPUT."<<endl;
        cin>>ch1;
        if(ch1=='1')
            {   P1(price_of_liter);break;   }
        else if(ch1=='2')
            {   P2(price_of_liter);break;   }
        else if(ch1=='3')
            {   P3(price_of_liter);break;   }
        else if(ch1=='4')
            {   P4(price_of_liter);break;   }
        else if(ch1=='5')
            {   keyboard(price_of_liter);break; }
        else 
            {   cout<<"Invalid Input. Try Again! "<<endl;continue;  }


        
    }    

    cout<<"Thank You!"<<endl;
    return 0;
}
