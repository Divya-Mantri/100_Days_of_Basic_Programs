#include<iostream>
using namespace std;

//Program to print integer pyramid pattern
int main()
{
    int n;
    cout<<"Enter the integer you want the pyramid of : ";
    cin>>n;

    int row,column;
    cout<<"Enter the number of rows : ";
    cin>>row;

    for(int i=0;i<row;i++)
    {
        for(int k=row-(i+1);k>=0;k--)
        {
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++)
        {
            cout<<n<<" ";
        }
        cout<<endl;
    }
}