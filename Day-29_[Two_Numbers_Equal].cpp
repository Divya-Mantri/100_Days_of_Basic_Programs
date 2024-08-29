#include<iostream>
using namespace std;

void check(int &num)
{
    while(cin.fail()|| cin.peek()!=('\n'))
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');

        cout<<"Invalid input!! ........Enter the number again :: "<<endl;
        cin>>num;
    }
}

void Equal(int num1,int num2)
{
    if(num1==num2)
    {
        cout<<num1<<" and "<<num2 <<" are equal!"<<endl;
    }
    else if(num1>num2)
    {
        cout<<"Oops! "<<num1<<" is greater than "<<num2<<endl;
    }
    else
    {
        cout<<"Oops! "<<num1<<" is less than "<<num2<<endl;
    }
}


int main()
{
    int num1,num2;
    cout<<"Enter the first number ::";
    cin>>num1;

    check(num1);

    cout<<"Enter the second number :: ";
    cin>>num2;

    check(num2);

    Equal(num1,num2);




}