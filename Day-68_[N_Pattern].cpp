#include<iostream>
using namespace std;

// Program to print N Pattern 
int main()
{
    int n;
    cout<<"Enter the number of rows you want : ";
    cin>>n;

    while(n<3)
    {
        cout<<"Oops! The input is too low ........Please enter value greater than or equal to 3 : ";
        cin>>n;
    }

    for(int i=0;i<n;i++)
    {
        cout<<"*";

        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }

        for(int k=1;k<=1;k++)
        {
            cout<<"*";
        }

        for(int l=(n-(i+1));l>0;l--)
        {
            cout<<" ";
        }
        
        cout<<"*";

        cout<<endl;
    }
}