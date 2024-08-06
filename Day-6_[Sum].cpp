#include<iostream>
using namespace std;
 
int main()
{
    //Initialize two variables two take inputs from the user in it  
    int num1 ,num2;

    //Prompt to the user 
    cout<<"Enter two numbers you want to add : ";

    //Taking input 
    cin>>num1>>num2;

    //Ensure user input an integer
    while(cin.fail())
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');
        cout<<"Invalid input! Please Enter integer value ..."<<endl;
        cin>>num1>>num2;
    }

    //Displaying addition of two numbers in format 
    cout<<"Sum is: "<<num1 << "+" << num2<< "="<<num1+num2<<endl;


    return 0;

}