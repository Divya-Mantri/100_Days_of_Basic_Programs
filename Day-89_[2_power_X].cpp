#include<iostream>
using namespace std;

//Program to calculate 2 power X 

int powerX(int n)
{
    int result=1;
    for(int i=1;i<=n;i++)
    {
        result=(2*result);
    }

    return result;
}

int main()
{
    int X;
    cout<<"Enter the value of X : ";
    cin>>X;

    cout<<"2 Raise to power "<<X<<" will be : "<<powerX(X);

    return 0;
}