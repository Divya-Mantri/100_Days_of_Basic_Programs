#include<iostream>
using namespace std;

//Program to Calculate Sum of Last Three digits of a given number  

int sum(int number)
{
    int sum=0;
    int count=3;
    while (count--)
    {
        int rem=number%10;
        sum=sum+rem;
        number=number/10;
    }

    return sum;
}


int main()
{
    int number;
    cout<<"Enter the number : ";
    cin>>number;

    if(number<100)
    {
        cout<<"Given number is less than required!"<<endl;
        return 0;
    }
    
 
    cout<<"The sum of last 3 digits is : "<<sum(number)<<endl;

    
    return 0;
}