#include<iostream>
#include<cmath>
using namespace std;

//Program to check whether a given number is an armstrong number or not  

int count(int number)
{
    int count=0;
    while(number!=0)
    {
        number=number/10;
        count++;
    }
    return count;
}

int armstrong(int number,int count)
{
    int sum=0;
    cout<<number<<endl;
    while(number!=0)
    {
        int rem=number%10;
        
        int mul=1;
        for(int i=0;i<count;i++)
        {
            mul=rem*mul;
        }
        sum=sum+mul;
    
        number=number/10;

    }
    return sum;
}

int main()
{
    int number;
    cout<<"Enter the number : ";
    cin>>number;

    int sum = armstrong(number,count(number));

    if(sum==number)
    {
        cout<<"The given number is an Armstrong Number!"<<endl;
    }
    else
    {
        cout<<"Not an Armstrong Number!"<<endl;
    }
    
    return 0;

}