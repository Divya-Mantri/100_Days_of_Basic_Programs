#include<iostream>
using namespace std;


//Program to print last K integers from the list of integers
int main()
{
    int n;
    cout<<"Enter the number of elements you want to enter : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the list : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the number of elements you want to print from last : ";
    cin>> k;

    for(int i=n-(k);i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}