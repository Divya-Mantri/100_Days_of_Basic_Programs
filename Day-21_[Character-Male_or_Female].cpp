#include<iostream>
using namespace std;
 
int main()
{
    char Gender;
    cout<<"Enter the Gender 'M' for Male or 'F' for Female :: ";
    cin>>Gender;

    if(Gender=='M'||Gender=='m')
    {
        cout<<"Character is Male !"<<endl;
    }
    else if(Gender=='F'||Gender=='f')
    {
        cout<<"Character is Female!"<<endl;
    }
    else
    {
        cout<<"Invalid Input!"<<endl;
    }


    return 0;
    
}