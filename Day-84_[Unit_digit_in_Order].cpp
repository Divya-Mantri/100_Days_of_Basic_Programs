#include<iostream>
using namespace std;

//Program to print unit digits in ascending and descending order


void display(int arr[],int n)
{
     for(int i=0;i<n;i++)
    {
        cout<<abs(arr[i])<<" ";
    }
    cout<<endl;
}

void ascending_Order(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(arr[i])>abs(arr[j]))
            {
                int index=arr[i];
                arr[i]=arr[j];
                arr[j]=index;
            }
        }
    }

}

void descending_Order(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(arr[i])<abs(arr[j]))
            {
                int index=arr[i];
                arr[i]=arr[j];
                arr[j]=index;
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the number of elements you want to enter : ";
    cin>>n;

    int numbers[n];
    cout<<"Enter the elements of an the list : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }

    int unit_digits[n];
    for(int i=0;i<n;i++)
    {
        unit_digits[i]=numbers[i]%10;
    }

    ascending_Order(unit_digits,n);
    cout<<"Unit_digits in Ascending Order"<<endl;
    display(unit_digits,n);

    descending_Order(unit_digits,n);
    cout<<"Unit digits in Descending Order "<<endl;
    display(unit_digits,n);


    return 0;
}