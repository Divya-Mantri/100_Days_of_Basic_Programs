#include<iostream>
using namespace std;
 
int main()
{
    int number;
    cout<<"Enter the number :: ";
    cin>>number;

    while(cin.fail()||cin.peek()!=('\n'))
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');

        cout<<"Invalid input!!....Please enter the valid input :: "<<endl;
        cin>>number;
    }

    cout<<"Your Previous number is :: "<<number-1<<endl;
}   