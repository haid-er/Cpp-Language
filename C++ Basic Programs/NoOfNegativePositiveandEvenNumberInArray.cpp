#include<iostream>
using namespace std;
int main()
{
    int M[10],positive,negative,odd,even,zero;    
    positive=negative=odd=even=zero=0;
    system("cls");
    for(int i=0;i<=9;i++)
    {
        cout<<"Enter any Integer:";
        cin>>M[i];
        if(M[i]<0)
            negative++;
        else if(M[i]>0)
            positive++;
        else
            zero++;
        if(M[i]%2==0)
        {    
            even++;
            if(M[i]==0)
                even--;
        }
        else
            odd++;

    }
    cout<<"Number of Negative Numbers in Array = "<<negative<<endl;
    cout<<"Number of Positive Numbers in Array = "<<positive<<endl;
    cout<<"Number of Zero in Array = "<<zero<<endl;
    cout<<"Number of Even Numbers in Array = "<<even<<endl;
    cout<<"Number of Odd Numbers in Array = "<<odd<<endl;

    return 0;
}