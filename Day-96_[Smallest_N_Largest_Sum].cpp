#include<iostream>
using namespace std;

//Program to calculate sum of smallest and largest numbers in the given list 
int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;

    int numbers[n];
    cout<<"Enter the elements : "<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }

    int smallest=INT32_MAX;
    int largest=INT32_MIN;
    for(int i=0;i<n;i++)
    {
        if(numbers[i]<smallest)
        {
            smallest=numbers[i];
        }
        if(numbers[i]>largest)
        {
            largest=numbers[i];
        }
    }

    int sum=smallest+largest;

    cout<<"The Sum of Smallest and Largest number in the given list is : "<<sum<<endl;

    return 0;
}