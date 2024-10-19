#include<iostream>
using namespace std;

//Program to count number of times string2 occur in string1 
int main()
{
    string S1;
    cout<<"Enter the message : ";
    cin>>S1;

    string S2;
    cout<<"Enter what you want to find in message : ";
    cin>>S2;

    int count=0;

    for(int i=0;i<=S1.length()-S2.length();i++)
    {
        bool match=true;
        for(int j=0;j<S2.length();j++)
        {
            if(S1[i+j]!=S2[j])
            {
                match=false;
                break;
            }
        }
        if(match)
        {
            count++;
        }
    }

    cout<<"Count of S2 in S1 is : "<<count<<endl;


    return 0;
}