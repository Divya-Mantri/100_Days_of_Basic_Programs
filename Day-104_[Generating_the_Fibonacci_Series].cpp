#include<iostream>
using namespace std;

//Program to Generate the fibonacci series 
int main()
{
    int number;
    cout<<"Enter the number upto which you want to generate the fibonacci series : ";
    cin>>number;

    int previous=0;
    int current=1;
    if(number==0)
    {
        cout<<previous<<" ";
    }
    else if(number<0)
    {
        cout<<"Invalid input!"<<endl;
        return 0;
    }
    else
    {
        cout<<previous<<" "<<current<<" ";
    }
    while(true)
    {
        int next=current;
        current=previous+next;

        if(current>number)
        {
            break;
        }
        cout<<current<<" ";
        previous=next;


    }
}