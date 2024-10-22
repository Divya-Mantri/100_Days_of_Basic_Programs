#include<iostream>
using namespace std;

//Program to print first 10 Multiples of X and Y 
int main()
{
    int X;
    cout<<"Enter X : ";
    cin>>X;

    int Y;
    cout<<"Enter Y : ";
    cin>>Y;

    int count=0;

    for(int i=1;;i++)
    {
        if(i%X==0 && i%Y==0)
        {
            cout<<i<<" ";
            count++;
            if(count==10)
            {
                return 0;
            }
        }
    }

}