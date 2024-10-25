#include<iostream>
using namespace std;

//Program to print element in given Xth position 
int main()
{
    int n;
    cout<<"Enter the number of elements in an array : ";
    cin>>n;

    int numbers[n];
    cout<<"Enter the elements of the list  "<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }

    int x;
    cout<<"Enter the position you want to know : ";
    cin>>x;

    if(x-1<=n && x-1>0)
    {
        cout<<"Element at "<<x<<" Positon is : "<<numbers[x-1]<<endl;
    }
    else if (x+1>=n)
    {
        cout<<"OOps! There's no element exist at that position "<<endl;
    }
    else
    {
        cout<<"Please Enter the valid positon !"<<endl;
    }




    return 0;

}