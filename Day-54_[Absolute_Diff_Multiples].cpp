#include<iostream>
using namespace std;

//Program for printing Absolute Difference Multiples
int main()
{
    int num1,num2;
    cout<<"Enter the two numbers : ";
    cin>>num1>>num2;

    int no_of_multiples;
    cout<<"Enter the number of multiples you want to print :";
    cin>>no_of_multiples;

    int diff=abs(num1-num2);

    for(int i=1;i<=no_of_multiples;i++)
    {
        cout<<diff*i<<" ";
    }

    cout<<endl;
    
    return 0;
}