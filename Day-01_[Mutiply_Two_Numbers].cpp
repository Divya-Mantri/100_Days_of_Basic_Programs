#include<iostream>
using namespace std;

int main()
{
    //Initializing an integer t for storing how many times you want to perform the operation
    int time;
    cout<<"Enter the number for how many times u want to perform the operation:";
    //Read input from the user
    cin>>time;
    if(time<=0)
    {
        cout<<"Please enter a valid number!"<<endl;
        return 1;
    }

    //Iterating statements for given number of times 
    while(time--)
    {

    //Initializing two variables for storing two numbers
    int num1,num2;
    cout<<"Enter two numbers:"<<endl;
    //Taking input from the user 
    cin>>num1>>num2;

    //Initializing another integer variable to store multiplication & assigning it the multiplication of the values 
    int Multiply=num1*num2;

    cout<<"Multiplication of given two numbers is:"<<Multiply<<endl;

    }
    
}
