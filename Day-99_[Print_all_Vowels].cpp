#include<iostream>
using namespace std;

//Program to print all vowels in a given string  
int main()
{
    string message;
    cout<<"Enter the message : ";
    getline(cin,message);

    for(int i=0;i<message.size();i++)
    {
        char c= tolower(message[i]);
        if(c=='a'|| c=='e' || c=='o' || c=='u')
        {
            cout<<(message[i])<<" ";
        }
    }

    cout<<endl;

    return 0;

}