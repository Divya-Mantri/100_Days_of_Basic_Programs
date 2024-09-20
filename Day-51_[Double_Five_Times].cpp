#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number :: ";
    cin>>number;

    for(int i=0;i<5;i++)
    {
        number=number*2;
    }

    cout<<number<<endl;

    return 0;
}