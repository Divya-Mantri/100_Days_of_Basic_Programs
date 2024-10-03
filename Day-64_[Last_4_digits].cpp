//Program for printing last four digits 


#include<iostream>
using namespace std;

void validate(int &number)
{
    while(cin.fail()||cin.peek()!='\n')
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');

        cout<<"Invalid input! Please enter a valid number : "<<endl;
        cin>>number;
    }
}

int main()
{
    int number;
    cout<<"Enter your number : ";
    cin>>number;
    
    validate(number);


    int duplicate=number;
    int count=0;
    while(duplicate!=0)
    {
        int rem=duplicate%10;
        count++;
        duplicate=duplicate/10;
    }

    if(count<4)
    {
       cout<<"Number must be atleast 4-digit long " <<endl;
    }
    else
    {
        int  last_four_digits= number%10000;

        cout<<"Last four digits of your number is : "<<last_four_digits<<endl;
    }

    return 0;
}