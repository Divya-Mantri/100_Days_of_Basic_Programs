#include<iostream>
#include<math.h>

using namespace std;

//Program to print first two and last two digits of a given number 

void first_two(int number[],int n)
{
    for(int i=0;i<2;i++)
    {
        cout<<number[i]<<" ";
    }

}

void last_two(int number[],int n)
{
    for(int i=n-2;i<n;i++)
    {
        cout<<number[i]<<" ";
    }
}



int main()
{
    int n;
    cout<<"Enter the number of elemnts which should be atleast greater than or equal to 2  : ";
    cin>>n;

    while(n<2)
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');
        cout<<"Please enter the valid input : "<<endl;
        cin>>n;
    }

    int numbers[n];
    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }

    cout<<"The first two elements of the given array is : "<<endl;
    first_two(numbers,n);

    cout<<"\n The last two elements of the given array is : "<<endl;
    last_two(numbers,n);




    return 0;

}