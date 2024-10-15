#include<iostream>
using namespace std;

//Program to calculate sum of unit digits 3 or 6 
int main()
{
    int n;
    cout<<"Enter the number of elements you want to enter : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int sum=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]%10==3 || arr[i]%10==6)
        {
            sum=sum+arr[i];
        }
    }

    cout<<"The sum of number having unit digits as 3 or 6 is : "<<sum<<endl;
}