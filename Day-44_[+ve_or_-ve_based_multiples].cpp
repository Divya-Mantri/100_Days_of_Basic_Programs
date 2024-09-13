#include<iostream>
using namespace std;
 
int main()
{
    int number;
    cout<<"Enter the number :: ";
    cin>>number;

    int No_of_Multiples;
    cout<<"Enter the number of multiples you want :: ";
    cin>>No_of_Multiples;

    if(number==0)
    {
        cout<<"Oops! The given number has not multiples !"<<endl;
    }
    for(int i=1;i<=No_of_Multiples;i++)
    {
        cout<<(number*i)<<", ";
    }
    
    cout<<"..."<<endl;



    return 0;
}   