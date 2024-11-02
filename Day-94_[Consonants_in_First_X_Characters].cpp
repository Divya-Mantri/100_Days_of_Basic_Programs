#include<iostream>
using namespace std;

//Program to find  Consonants in first X characters
int main()
{
    string message;
    cout<<"Enter the message : ";
    cin>>message;

    int X;
    cout<<"Enter the value of X upto which we have to find : ";
    cin>>X;

    int count=0;
    
    for(int i=0;i<X;i++)
    {
        char temp=tolower(message[i]);
        if(temp!='a' && temp!='e' && temp!='i' && temp!='o' && temp!='u')
        {
            cout<<message[i]<<" ";
            count++;
        }
    }



    //----------------------------------------------------- Another Approach can be ------------------------------------------
    // for(int i=0;i<X;i++)
    // {
    //     if((message[i]!='a' && message[i]!='A') && (message[i]!='e' && message[i]!='E') && (message[i]!='i' && message[i]!='I') && (message[i]!='o' && message[i]!='O') && (message[i]!='u' && message[i]!='U'))
    //     {
    //         count++;
    //         cout<<message[i]<<" ";
    //     }
    // }

    cout<<"\n Total Number of Consonants are : "<<count<<endl;

    return 0;
}