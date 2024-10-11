#include<iostream>
using namespace std;

//Program to print integer (side triangle) pattern

int main()
{
    int integer;
    cout<<"Enter the integer less than 9 : ";
    cin>>integer;

    int rows;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    
    while(integer>9 ||integer<0)
    {
        cout<<"Invalid input! ..Please enter a valid input : ";
        cin>>integer;
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=rows-(1+i);j>=1;j--)
        {
            cout<<" ";
        }
        for(int k=0;k<=i;k++)
        {
            cout<<integer;
        }
        cout<<endl;
    }
}