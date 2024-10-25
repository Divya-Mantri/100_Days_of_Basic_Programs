#include<iostream>
using namespace std;

//Program to print two digit numbers 
int main()
{
    int number_start;
    cout<<"Enter the number from where you specifically want to start two digit numbers : ";
    cin>>number_start;

    while (number_start<10||number_start>100)
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');
        cout<<"Please enter the valid two-digit number : "<<endl;
        cin>>number_start;
    }
    
    int number_last;
    cout<<"Enter the number upto which you want to print two-digit numbers ";
    cin>>number_last;

    while(number_last>=100||number_last<10)
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');
        cout<<"PLease enter the valid two-digit number : "<<endl;
        cin>>number_last;
    }

    for(int i=number_start;i<=number_last;i++)
    {
        cout<<i<<" ";
    }

    return 0;
    
}