#include<iostream>
using namespace std;
double enter_number()
{
  double number;
  while(1)
  {

        cin>>number;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input " << endl;
        }
        else
        break;
        cout<<"Try again"<<endl;
  }
  return number;
}
int main()
{
    enter_number()
    
    


    return 0;
}