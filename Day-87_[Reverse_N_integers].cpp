#include<iostream>
using namespace std;

//Program to Reverse N Integers 
int main()
{
    int n;
    cout<<"Enter the number of elements you want to enter : ";
    cin>>n;

    int numbers[n];
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }

    //Reversing the given list of numbers
    for(int i=0;i<n-1;i++)
    {

        for(int j=i+1;j<n;j++)
        {
            int index=numbers[i];
            numbers[i]=numbers[j];
            numbers[j]=index;
        }
    }
    
    //Displaying the list after reversing the numbers in the list 
    for(int i=0;i<n;i++)
    {
        cout<<numbers[i]<<" ";
    }

    return 0;
}