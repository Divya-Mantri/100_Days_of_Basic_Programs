#include<iostream>
using namespace std;

//Program to reverse given String 
int main()
{
    string message;
    cout<<"Enter the message : ";
    cin>>message;

    for(int i=0;i<message.size()-1;i++)
    {
        for(int j=i+1;j<message.size();j++)
        {
            char temp=message[i];
            message[i]=message[j];
            message[j]=temp;
        }
    }

    cout<<message<<endl;

    return 0;
}