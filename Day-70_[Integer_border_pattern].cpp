#include<iostream>
using namespace std;

//Program for printing integer border pattern
int main()
{
    int integer;
    cout<<"Enter your single digit integer:";
    cin>>integer;

    while(integer>9 || integer<0)
    {
        cout<<"Please enter valid input : ";
        cin.clear();
        cin.ignore(INT32_MAX,'\n');
        cin>>integer;
    }


    int rows;
    cout<<"Enter the number of rows you want : ";
    cin>>rows;

    for(int i=0;i<rows;i++)
    {
        for(int j=i;j<=i;j++)
        {
            cout<<integer;
        }
        for(int k=0;k<rows;k++)
        {
            if(i==0 || i==rows-1)
            {
             cout<<integer;
            }
            else
            {
                cout<<" ";
            }
        }
        for(int j=i;j<=i;j++)
        {
            cout<<integer;
        }
        cout<<endl;
    }
}   