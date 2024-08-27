#include<iostream>
using namespace std;
 
int main()
{
    //Printing Remainder when divide by 5

    int number;
    cout<<"Enter the number:: ";
    cin>>number;

    while(cin.fail()||cin.peek()!=('\n'))
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');
        cout<<"Invalid Input!!......Please Enter the valid integer ::"<<endl;
        cin>>number;
    }

    cout<<"The Remainder of the "<<number<<" upon dividing it by 5 is :: "<<(number%5)<<endl;


    return 0;
}