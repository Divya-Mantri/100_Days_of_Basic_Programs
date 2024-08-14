#include<iostream>
using namespace std;
 
int main()
{
    float num1,num2;
    cout<<"Enter the first number ::";
    cin>>num1;
    while(cin.fail() || cin.peek()!=('\n'))
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');

        cout<<"Invalid input!.....Enter the valid numbers please::"<<endl;
        cin>>num1;
    }

    cout<<"Enter the second number ::";
    cin>>num2;
     while(cin.fail() || cin.peek()!=('\n'))
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');

        cout<<"Invalid input!.....Enter the valid numbers please::"<<endl;
        cin>>num2;
    }

    cout<<"Division of Two values is ::"<<(num1/num2)<<endl;

} 