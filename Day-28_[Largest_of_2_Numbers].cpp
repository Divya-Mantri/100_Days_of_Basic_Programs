#include<iostream>
using namespace std;

void check(float &num)
{
    while(cin.fail() || cin.peek()!=('\n'))
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');

        cout<<"Invalid input!!.......Please Enter a valid input :: "<<endl;
        cin>>num;
    }
}

void Largest(float num1,float num2)
{
    if(num1>num2)
    {
        cout<<"The largest number between "<<num1<<" and "<<num2 <<" is :: "<<num1<<endl;
    }
    else if(num2>num1)
    {
        cout<<"The largest number between "<<num1<<" and "<<num2<<" is :: "<<num2<<endl;
    }
    else
    {
        cout<<"OOps! No one is largest ...Both are Equal!!"<<endl;
    }
}

int main()
{
    float num1,num2;
    cout<<"Enter the first number ::";
    cin>>num1;

    check(num1);

    cout<<"Enter the second number :: ";
    cin>>num2;

    check(num2);

    Largest(num1,num2);



}