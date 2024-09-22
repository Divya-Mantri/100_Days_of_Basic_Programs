#include<iostream>
using namespace std;
 
int main()
{
    int num1,den1;
    cout<<"Enter the first Numerator and Denominator : ";
    cin>>num1>>den1;

    cout<<"Given first fraction's value is : "<<num1<<" / "<<den1<<endl;

    int num2,den2;
    cout<<"Enter the second Numertor and Denominator : ";
    cin>>num2>>den2;

    cout<<"Given Second fraction's value is : "<<num2<<" / "<<den2<<endl;

    //To check for the same Numerator and Denominator 
    if(num1==num2 && den1==den2)
    {
        cout<<" Numerator and Denominator are same of both fractions !"<<endl;
    }
    else if(num1==num2)
    {
        cout<<"Numerator are same of both fractions !"<<endl;
    }
    else if(den1==den2)
    {
        cout<<"Denominator are same of both fractions !"<<endl;
    }
    else
    {
        cout<<"Neither Numerator nor Denominator are same of both fractions !"<<endl;
    }


    return 0;
}