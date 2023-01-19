#include<iostream>
using namespace std;
int main()
{
    char c;
    // system("cls");
    cout<<"Enter any character:"<<endl;
    cin>>c;
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
     {
         cout<<"Entered Character is vowel."<<endl;
     }
     else if(c>'a'&&c<'z'||c>'A'&&c<'Z')
     {
         cout<<"Entered character is consonant"<<endl;
     }
     else
     {
         cout<<"Entered character is Special Character."<<endl;
     }
     return 0;
}