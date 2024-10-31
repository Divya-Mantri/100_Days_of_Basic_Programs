#include<iostream>
using namespace std;

//Program to find the given element in the list  
int main()
{
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;

    int list[n];
    cout<<"Enter the elements of the list : ";

    for(int i=0; i<n;i++)
    {
        cin>>list[i];
    }

    int number ;
    cout<<"Enter the element to find : ";
    cin>>number;

    for(int i=0;i<n;i++)
    {
        if(list[i]==number)
        {
            cout<<"The given number is at : "<<i+1<<" th position "<<endl;
            return 0;
        }
    }

    cout<<"The given number not found ! "<<endl;

    return 0;

}