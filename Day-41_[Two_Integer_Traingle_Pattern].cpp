#include<iostream>
using namespace std;
 
int main()
{
    int num1, num2;
    std::cout<<"Enter two numbers :: ";
    cin>>num1>>num2;

    int n;
    std::cout<<"Enter the value of n (i.e. how long you want to print the traingle (length)) :: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2!=0)
            {
                std::cout<<'1'<<' ';        
            }
            else
            {
                std::cout<<'2'<<' ';
            }
        }
            std::cout<<endl;
       
    }
}