#include<iostream>
using namespace std;
 
int main()
{
    int number;
    cout<<"Enter a number :: ";
    cin>>number;

    int count=0;
    cout<<"First three factors of the given number are :: ";
    for(int i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            cout<<i<<" ";
            count++;
            if(count==3)
            {
                return 0;
            }
        }
    }
}