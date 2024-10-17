#include<iostream>
#include<math.h>
using namespace std;

//Program for reversing odd digits in a given number 
int main()
{
    int number;
    cout<<"Enter the number : ";
    cin>>number;

    int duplicate=number;
    int new_reversed_number=0;

    int count=0;
    while(duplicate!=0)
    {
        duplicate=duplicate/10;
        count++;
    }
    count=count-1;
    
    duplicate=number;
    int duplicate_2=number;
    int quo=0;

    while(duplicate!=0)
    {
        int divisor=1;
        for(int i=0;i<count;i++)
        {
            divisor=divisor*10;
        }
       
        quo=(duplicate/divisor);
       
        if(quo%2==0)
        {
            new_reversed_number=(new_reversed_number*10)+quo;
        }
        else
        {
            int rem=duplicate_2%10;

            while(rem%2==0)
            {
                duplicate_2=duplicate_2/10;
                rem=duplicate_2%10;    
            }
                duplicate_2=duplicate_2/10;
                 new_reversed_number=(new_reversed_number*10)+rem;
            
        }

        if(count==0)
        {
            cout<<"The New number after reversing Odd digits in the given number is : "<< new_reversed_number<<endl;
            return 0;
        }
        
     
        duplicate=(duplicate % divisor);
        count--;
       
    }

    cout<<"The New number after reversing Odd digits in the given number is : "<< new_reversed_number<<endl;


    return 0;
}