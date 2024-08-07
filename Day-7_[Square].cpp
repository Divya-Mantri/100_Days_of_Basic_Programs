#include<iostream>
using namespace std;
 
int main()
{
    //Initialized a variable to contain the given number
    int number;
    cout<<"Enteer the number whose square you have to find:" ;
    cin>>number;

    while(cin.fail())
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');
        cout<<"Invalid input! Please Enter an integer..."<<endl;
        cin>>number;
    }
    cout<<"Square of "<< number<<" * " <<number<<" = "<<number*number<<endl;

}