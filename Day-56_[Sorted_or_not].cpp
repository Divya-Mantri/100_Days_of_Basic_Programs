#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cout<<"Enter number of elements you want to enter :";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array :";
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int flag=0;

    if(arr[0]<arr[0+1])
    {
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]<arr[i+1])
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }

        }
    }
    else if(arr[0]>arr[0+1])
    {
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }

        }
    }

    if(flag==1)
    {
        cout<<"The given array is sorted !"<<endl;
    }
    else
    {
        cout<<"The given array is not sorted!"<<endl;
    }

}