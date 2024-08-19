#include<iostream>
using namespace std;
 
int main()
{
    int number;
    cout<<"Enter the number to find out whether it is even or odd? ::";
    cin>>number;

    while (cin.fail() || cin.peek()!=('\n'))
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');

        cout<<"Invalid input....Please enter the input again ::"<<endl;
        cin>>number;
    }

    (number%2 ==0 ? cout<<"Given number is Even" : cout<<"Given number is Odd");

    return 0;
    

}