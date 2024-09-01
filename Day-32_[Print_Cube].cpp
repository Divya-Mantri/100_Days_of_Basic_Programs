#include<iostream>
using namespace std;
 
void cube(int value)
{
    cout<<"Cube of the given number is :: "<<value*value*value<<endl;
}

int main()
{
    int number;
    cout<<"Enter your number ::";
    cin>>number;

    while(cin.fail()|| cin.peek()!=('\n'))
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');

        cout<<"Invalid Input!!......Please Enter the input again :: "<<endl;
        cin>>number;
    }

    cube(number);


    return 0;

}