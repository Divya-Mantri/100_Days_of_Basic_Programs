#include<iostream>
using namespace std;
 
 //defining function to check whether the given input is zero or not
 void isZero(int value)
 {
    //checking the condition using ternary operator
    if(value!=0 ? cout<<"True...The given value is not equal to zero..." : cout<<"False...The given value is equal to zero!");
    cout<<" "<<endl;

 };

int main()
{
    //Initialised a variable to store the given number
    int num;

    //Prompt to the user
    cout<<"Please Enter a number :: ";

    //read input
    cin>>num;

    //checking that user shouldn't enter anything other than integers
    while(cin.fail())
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');
        
        cout<<"Invalid input!.......Please enter an integer value::"<<endl;
        cin>>num;
    }
    
    //calling function
    isZero(num);
}   