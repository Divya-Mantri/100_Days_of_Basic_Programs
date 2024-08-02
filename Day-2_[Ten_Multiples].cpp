#include<iostream>
using namespace std;
 
int main()
{
    //Initializing an integer with variable name as number whose ten multiples we have to calculate
    int number;

    cout<<"Enter the number :";             //Prompting to the user to enter a number
    cin>>number;                            //Taking the input from the user

    cout<<"Ten Multiples of "<<number<<" are -"<<endl;

    //Iterating from 1 to 10 for ten multiples
    for(int i=1;i<=10;i++)
    {
        cout<<number*i<<" ";
    }
    cout<<endl;

    return 0;
}