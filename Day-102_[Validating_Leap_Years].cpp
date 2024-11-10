#include<iostream>
using namespace std;

//Program to check whether a year is leap year or not  
int main()
{
    int year;
    cout<<"Enter the year to check : ";
    cin>>year;

    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                cout<<year<<" is a leap year!"<<endl;
            }
            else
            {
                cout<<year<<" is not a leap year!"<<endl;
            }
        }
        else
        {
            cout<<year<<" is a leap year !"<<endl;
        }
    }
    else
    {
        cout<<year<<" is not a leap year!"<<endl;
    }

    return 0;
}