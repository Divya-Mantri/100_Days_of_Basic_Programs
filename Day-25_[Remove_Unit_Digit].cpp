#include<iostream>
using namespace std;

void check(int &value)
{
    while(cin.fail() ||cin.peek()!=('\n'))
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');

        cout<<"Invalid input!...Please Enter the number again ::";
        cin>>value;
    }
}

void remove_unit(int &number)
{
    number=number/10;
}
 
int main()
{
    int number;
    cout<<"Enter the number ::";
    cin>>number;

    check(number);

    remove_unit(number);
    cout<<"The given number will be after removing unit digit is :: "<<number;

    return 0;

}