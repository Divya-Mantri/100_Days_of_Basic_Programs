#include<iostream>
using namespace std;


//Program to print Middle 3 characters of the string 
int main()
{
    string message;
    cout<<"Enter your message : ";
    cin>>message;

    if(message.size()<3 || message.size()%2==0)
    {
        cout<<"Not enough Characters or the string is of even length ! "<<endl;
    }
    else if(message.size()%2!=0)
    {
            cout<<message[(message.size()/2)-1]<<" ";
            cout<<message[(message.size()/2)]<<" ";
            cout<<message[(message.size()/2)+1]<<endl;
    }
    else
    {
        cout<<"Invalid input!"<<endl;
    }

    return 0;
}