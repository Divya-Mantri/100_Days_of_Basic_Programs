#include<iostream>
#include<math.h>
using namespace std;

//Program to Reverse Even digits in a given number keeps odd digits as it is  
int main()
{
    int number;
    cout<<"Enter the number : ";
    cin>>number;

    long long int duplicate=number;
    int count=0;

    while(duplicate!=0)
    {
        duplicate=duplicate/10;
        count++;
    }
    
    duplicate=number;
    long long int second_duplicate=number;
    long long int new_reversed_number=0;
    
    while(duplicate!=0)
    {
        long long int divisor=1;
        for(int i=0;i<count-1;i++)
        {
            divisor=divisor*10;
        }
        cout<<divisor<<endl;
        int digit=duplicate/divisor;
        if(digit%2!=0)
        {
            new_reversed_number=new_reversed_number*10+digit;
        }
        else if(digit%2==0)
        {
            int digit=second_duplicate%10;
            while(digit%2!=0)
            {
                second_duplicate=second_duplicate/10;
                digit=second_duplicate%10;
            }
            second_duplicate=second_duplicate/10;
            new_reversed_number=new_reversed_number*10+digit;
        }

        count--;
        
        duplicate=duplicate%divisor;

    }

    cout<<"The number after reversing the even digits is : "<<new_reversed_number<<"\n";

}