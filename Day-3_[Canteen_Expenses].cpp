#include<iostream>
using namespace std;


int main()
{

    int total_items;
    cout<<"Total number of items are :";
    cin>>total_items;
    while(cin.fail() || cin.peek()!='\n')
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');

        cout<<"Invalid number!.....Please enter a valid integer:";
        cin>>total_items;
    }

    int sum=0;
    int price;
    while(total_items--)
    {
        cout<<"Enter the price ::";
        cin>>price;
        
        while(cin.fail()||cin.peek() !='\n')
        {
            cin.clear();
            cin.ignore(INT32_MAX,'\n');

            cout<<"Invalid Amount!...........Please Enter the valid Amount::";
            cin>>price;
        }

        sum=sum+price;
    }

    cout<<"Total Expenses are :"<<sum<<endl;
}