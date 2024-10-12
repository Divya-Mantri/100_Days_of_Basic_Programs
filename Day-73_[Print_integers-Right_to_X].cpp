#include<iostream>
using namespace std;

//Program to print integers which comes to the right of given integer
int main()
{
    int X;
    cout<<"Enter the integer : ";
    cin>>X;

    int number;
    cout<<"How many integers you want to print : ";
    cin>>number;

    for(int i=X+1;i<=(X+number);i++)
    {
        cout<<i<<" ";
    }

    return 0;
}