#include<iostream>
using namespace std;
 
int main()
{
     int num[5];
     cout<<"Enter the elements of an array :: ";
     for(int i=0;i<5;i++)  
     {
        cin>>num[i];
     }

    int count=0;
     for(int i=0;i<5;i++)
    {
        if(num[i]%2!=0)
        {
            count++;
        }
    }

    cout<<"The count of odd numbers is :: "<<count<<endl;


    return 0;
}