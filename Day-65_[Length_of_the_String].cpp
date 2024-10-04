#include<iostream>
using namespace std;

//Program to print length of the string  
int main()
{
    string message;
    cout<<"Enter your one word Message : ";
    cin>>message;

    // first method
    cout<<"The length of the given string using length() function is : "<<message.length()<<endl;

    // second method
    cout<<"The length of the given string using size() function : "<<message.size()<<endl;

    //Another method is iterating through range based for-loop 

    int length =0;          //initialise a variable to count 
    for(char m: message)    //iterate through each character in string message 
    {
        length++;
    }

    cout<<"The length of the string using range based for-loop is : "<<length<<endl;

    

    return 0;
}