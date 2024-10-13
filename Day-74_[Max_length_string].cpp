#include<iostream>
using namespace std;

//Program to find maximum length of the string from the given two strings 
int main()
{
    string S1;
    cout<<"Enter the first string : ";
    cin>>S1;

    string S2;
    cout<<"Enter the second string : ";
    cin>>S2;

    if(S1.length()>S2.length())
    {
        cout<<"Maximum length string is S1 and the length is : "<<S1.length()<<endl;
    }
    else if(S2.length()>S1.length())
    {
        cout<<"Maximum length string is S2 and the length is : "<<S2.length()<<endl;
    }
    else
    {
        cout<<"Both string are of same length that is : "<<S1.length()<<endl;
    }


    return 0;
}