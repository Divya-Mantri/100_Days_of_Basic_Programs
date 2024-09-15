#include<iostream>
using namespace std;
 
int main()
{
    int number;
    cout<<"Enter the number :: ";
    cin>>number;

    if(abs(number)%100>9 && abs(number)<100)
    {
        cout<<"The given number "<<number<<" is a two-digit number !"<<endl;
    }
    else if(abs(number)%1000>99 && abs(number)<1000)
    {
        cout<<"The given number "<<number<<" is a three-digit number !"<<endl;
    }
    else
    {
        cout<<"The given number "<<number<<" is neither a two-digit number nor a three-digit number!"<<endl;
    }
}