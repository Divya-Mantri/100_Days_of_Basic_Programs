#include<iostream>
using namespace std;

//Program for Inverse Fraction

void inverse_fraction(int num,int den)
{
    if(num==0)
    {
        cout<<"Oops! Inverse doesn't exist becoz numerator is zero !";
    }
    else
    {
        cout<<"Inverse of the given fraction "<<num<<"/"<<den<<" is : "<<den<<"/"<<num<<endl;
    }
}

int main()
{
    int num, den;
    cout<<"Enter the numerator : ";
    cin>>num;

    cout<<"Enter the denominator : ";
    cin>>den;

    while(den==0)
    {
        cout<<"Oops! Denominator can't be zero !.......Please enter the valid input : "<<endl;
        cin>>den;
    }

    inverse_fraction(num,den);


    return 0;
}