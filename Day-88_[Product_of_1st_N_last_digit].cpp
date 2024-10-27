#include<iostream>
#include<math.h>
using namespace std;

//Program to calculate product of first and last digit of a given number  

int product(int number )
{
    if(number==0)
    {
        return 0;
    }
    //Finding out the last digit of the given number
    int last_num=number%10;
    //To find out the first digit of the given number we are counting number of digits in the given number we have
    int temp=number;
    int count=0;
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }

    //Now, we calculate the first digit of the given number

    int divisor=pow(10,count-1);
    int first_num=number/divisor;

    return (first_num*last_num);
}


int main()
{
    int number;
    cout<<"Enter the number : ";
    cin>>number;

    cout<<"The Product of first and last digit of the given number is : "<<product(number)<<"\n";


    return 0;
}