#include<iostream>
using namespace std;

//Program to check if the given number is a prime number  or not
int main()
{
    int number;
    cout<<"Enter the number : ";
    cin>>number;

    if(number<2)
    {
        cout<<"The given number is not a prime number!"<<endl;
    }
    else if (number==2)
    {
        cout<<"The given number is a prime number!"<<endl;
    }
    else 
    {

        for(int i=2;i<number;i++)
        {
            if(number%i==0)
            {
                cout<<"The given number is not a prime number!"<<endl;
                return 0;
            }
        }

        cout<<"The given number is a prime number!"<<endl;
    }

    return 0;
}