#include<iostream>
using namespace std;

//Program to calculate sum of even digits in a single integer
int main()
{
    int number;
    cout<<"Enter the number : ";
    cin>>number;

    int sum=0;
    while(number!=0)
    {
        int rem=number%10;
        if(rem%2==0)
        {
            sum=sum+rem;
        }
        number=number/10;
    }

    cout<<"The sum of the even digits is : "<<sum<<endl;

    return 0;
}