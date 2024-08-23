#include<iostream>
using namespace std;
 
void check(int &num)
{
    while(cin.fail() || cin.peek()!=('\n'))
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');

        cout<<"Invalid input!.......Please Enter the input again::"<<endl;
        cin>>num;
    }
}

void smallest(int num1,int num2)
{
    if(num1<num2)
    {
        cout<<num1 <<" is smallest"<<endl;
    }
    else
    {
        cout<<num2 <<" is smallest"<<endl;
    }
}


int main()
{
    int num1,num2;
    cout<<"Enter the first number ::";
    cin>>num1;

    check(num1);

    cout<<"Enter the Second number ::";
    cin>>num2;

    check(num2);

    smallest(num1,num2);



    
}