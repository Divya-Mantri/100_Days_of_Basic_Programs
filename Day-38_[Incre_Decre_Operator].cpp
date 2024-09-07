#include<iostream>
using namespace std;
 
int main()
{
    int number;
    cout<<"Enter the number :: ";
    cin>>number;

   //post-increment
    cout<<"After post-increment by 1 the number is :: "<<number++<<endl;
    cout<<"NOw the number is :: "<<number<<endl;


    
     //pre-increment
    cout<<"After pre-increment by 1 the number is :: "<< ++number<<endl;
    cout<<"NOw the number is :: "<<number<<endl;
   

     //post-decrement
    cout<<"After post-decrement by 1 the number is :: "<<number--<<endl;
    cout<<"NOw the number is :: "<<number<<endl;

   

    //pre-decrement
    cout<<"After pre-decrement by 1 the number is :: "<<--number<<endl;
    cout<<"NOw the number is :: "<<number<<endl;
   

    
    
}