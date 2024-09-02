#include<iostream>
using namespace std;
 
int main()
{
    int number;
    cout<<"Enter your number :: ";
    cin>>number;

    while(cin.fail()||cin.peek()!=('\n'))
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');

        cout<<"Invalid input!! Please enter the valid input :: "<<endl;
        cin>>number;
    }

    cout<<"Your next Number is :: "<<number+1<<endl;


    return 0;
}