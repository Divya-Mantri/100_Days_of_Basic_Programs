#include<iostream>
using namespace std;
 
int main()
{
    int start_N;
    cout<<"Enter the number from where you wanna start : ";
    cin>>start_N;

    int end_N;
    cout<<"Enter the number upto which you wanna print : ";
    cin>>end_N;

    if(start_N<=end_N)
    {
        for(int i=start_N;i<=end_N;i++)
        {
            cout<<i<<" ";
        }
    }
    else if(start_N>end_N)
    {
        for(int i=start_N;i>=end_N;i--)
        {
            cout<<i<<" ";
        }
    }
    else
    {
        cout<<"Invalid input!"<<endl;
    }

    cout<<endl;

    return 0;
}