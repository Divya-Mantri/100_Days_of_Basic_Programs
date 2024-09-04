#include<iostream>
#include<math.h>
using namespace std;

void check(int &number)
{
     while(cin.fail()|| cin.peek()!=('\n'))
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');
        cout<<"Invalid input....Please enter a valid integer :: "<<endl;
        cin>>number;
    }

}

int second_to_last_digit(int number)
{
    int number_copy=number;
    int count=0;
    while(number_copy!=0)
    {
        number_copy=number_copy/10;
        count++;
    }
    count=count-1;
  
    for(int i=count;i>1;i--)
    {
        float divisor=pow(10,i);
        number=number % int(divisor);
       
    }
    number=number/10;
    
    return number;
}

int main()
{
    int number;
    cout<<"Enter an integer number :: ";
    cin>>number;

    check(number);

   if(second_to_last_digit(number)==0)
   {
    cout<<"There's no second-to-last digit in the given number"<<endl;
   }
   else
   {
    cout<<"The Second-to-last digit of the given number is :: "<<second_to_last_digit(number)<<endl;
   }

}