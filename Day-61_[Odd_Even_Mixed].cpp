#include<iostream>
using namespace std;

//Program to Differentiate Even and Odd Numbers 
int main()
{
    int n;
    cout<<"Enter the number of numbers you want to enter : ";
    cin>>n;

    int num[n];
    cout<<"Enter the elements of an array : ";

    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }

    cout<<"Even numbers are : "<<endl;
    for(int i=0;i<n;i++)
    {
        if(num[i]%2==0)
        {
            cout<<num[i]<<" ";
        }
    }

    cout<<"\n Odd numbers are : "<<endl;
    for(int i=0;i<n;i++)
    {
        if(num[i]%2!=0)
        {
            cout<<num[i]<<" ";
        }
    }
}