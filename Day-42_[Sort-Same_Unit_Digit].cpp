#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cout<<"Enter the size of an array :: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of an array :: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
          if((arr[j]%10)>(arr[j+1]%10))
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}