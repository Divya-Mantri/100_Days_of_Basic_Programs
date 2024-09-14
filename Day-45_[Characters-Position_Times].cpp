#include<iostream>
using namespace std;
  
int main()
{
    string Message;
    cout<<"Enter your Message :: ";
    getline(cin,Message);

    char character;                  
    cout<<"Enter the character to find :: ";
    cin>>character;

    cout<<"The given character '"<<character <<"' in the given Message are at positions :: ";
    for(int i=0;i<Message.length();i++)
    {
        if(Message[i]==character)
        {
            cout<<i<<" ";
        }
       
    }

    return 0;
    
}