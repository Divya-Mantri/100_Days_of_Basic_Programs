#include<iostream>
using namespace std;

//Program to sort integers in Smallest to Largest order  
int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;

    int numbers[n];
    cout<<"Enter the elements of list : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }


    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(numbers[i]>numbers[j])
            {
                int index;
                index=numbers[i];
                numbers[i]=numbers[j];
                numbers[j]=index;
            }
        }
    }


    for(int i=0;i<n;i++)
    {
        cout<<numbers[i]<<" ";
    }

    return 0;
}