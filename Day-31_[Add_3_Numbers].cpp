#include<iostream>
using namespace std;

void check(float &number)
{
    while (cin.fail()||cin.peek()!=('\n'))
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');

        cout<<"Invalid input!!......Please Enter the valid input again ::"<<endl;
        cin>>number;
    }
    
}

float sum(float num1,float num2,float num3)
{
    return num1+num2+num3;
}

int main()
{
    float num1,num2,num3;
    cout<<"Enter first number::";
    cin>>num1;

    check(num1);

    cout<<"Enter second number ::";
    cin>>num2;

    check(num2);

    cout<<"Enter third number ::";
    cin>>num3;

    check(num3);

    cout<<"Sum of the given numbers is :: "<<sum(num1,num2,num3);


    return 0;



}