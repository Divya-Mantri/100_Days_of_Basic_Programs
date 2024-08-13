#include<iostream>
using namespace std;
 
int main()
{
    
    float num1,num2;
    cout<<"Enter the first number whose average you have to find:: ";
    cin>>num1;

    while(cin.fail()|| cin.peek()!=('\n'))
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');

        cout<<"Invalid Input!......Please enter a valid integer::"<<endl;
        cin>>num1;

    }
    cout<<"Enter the second number::";
    cin>>num2;
    while(cin.fail() || cin.peek()!=('\n'))
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');

        cout<<"Invalid Input!......Please enter a valid integer::"<<endl;
        cin>>num2;

    }
    cout<<"Average of the two numbers is :: "<<(num1+num2)/2<<endl;


}