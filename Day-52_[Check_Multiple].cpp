#include<iostream>
using namespace std;
 
int main()
{
    

    int number;
    cout<<"Enter your number you want to check :: ";
    cin>>number;

    int N1;
    cout<<"Enter the first number of which you want to check multiple : ";
    cin>>N1;

    int N2;
    cout<<"Enter the second number of which you want to check multiple : ";
    cin>>N2;

    if(number%N1==0 && number%N2==0)
    {
        cout<<"The given number "<<number<<" is multple of "<<N1<<" and "<<N2<<endl;
    }
    else
    {
        cout<<"OOps! The given number is not a multiple "<<endl;
    }

    return 0;


}