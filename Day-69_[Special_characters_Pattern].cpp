#include<iostream>
using namespace std;

//Program to print a traingle pattern using given special characters
int main()
{
    char character;
    cout<<"Enter your character : ";
    cin>>character;

    int n;
    cout<<"Enter the number of rows you want : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<character;
        }
        cout<<endl;
    }


}