#include<iostream>
using namespace std;

void check(float &num)
{
    while(cin.fail() || cin.peek()!=('\n'))
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');

        cout<<"Invalid input! Please enter the input again:: "<<endl;
        cin>>num;
    }
}

float multiplication(float a,float b,float c)
{
    return (a*b*c);
}


int main()
{
    float num1,num2,num3;
    cout<<"Enter first number you want to multiply ::";
    cin>>num1;

    check(num1);

    cout<<"Enter the second number you want to multiply with :: ";
    cin>>num2;

    check(num2);

    cout<<"Enter the third number you want to multiply with::";
    cin>>num3;

    check(num3);

    cout<<"Muliplication of the given numbers is ::"<<multiplication(num1,num2,num3)<<endl;


    return 0;
    

}