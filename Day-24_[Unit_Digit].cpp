#include<iostream>
using namespace std;
 
void unit_digit(int num) 
{
    cout<<"Unit digit of the given "<<num <<" is "<<num%10<<endl;
}
void check(int &num)
{
    while(cin.fail() ||cin.peek()!=('\n'))
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');

        cout<<"Invalid input!.....Please Enter the input again ::"<<endl;
        cin>>num;
    }
}


int main()
{
    int number;
    cout<<"Enter a number ::";
    cin>>number;

    check(number);

    unit_digit(number);


    return 0;


}