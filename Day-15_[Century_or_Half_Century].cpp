#include<iostream>
using namespace std;
 
int main()
{
    int run;
    cout<<"Enter the run scored :: ";
    cin>>run;

    while(cin.fail() || cin.peek()!=('\n'))
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');

        cout<<"Invalid Input! Please enter a valid integer.."<<endl;
        cin>>run;
    }
    
    if(run<0)
    {
        cout<<"Invalid input!"<<endl;
    }
    else if(run<50)
    {
        cout<<"Not yet any Century!"<<endl;
    }
    else if(run>=50 && run<=99)
    {
        cout<<"Half Century!"<<endl;
    }
    else if(run>=100)
    {
        cout<<"Century!"<<endl;
    }
}