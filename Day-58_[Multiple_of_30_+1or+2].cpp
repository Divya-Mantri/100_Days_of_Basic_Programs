#include<iostream>
using namespace std;
 
//Program to check the given number is multiple of 30 +1 or +2
int main()
{
    int number;
    cout<<"Enter the number :";
    cin>>number;

    if((number-1)%30==0)
    {
        cout<<"The given number is a multiple of 30 plue 1 !"<<endl;
    }
    else if((number-2)%30==0)
    {
        cout<<"The given number is a multiple of 30 plus 2 !"<<endl;
    }
    else
    {
        cout<<"OOps! Not a multiple of 30 plus 1 or 2 !!"<<endl;
    }


    return 0;

}