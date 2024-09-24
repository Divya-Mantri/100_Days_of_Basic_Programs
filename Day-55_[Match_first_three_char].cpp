#include<iostream>
using namespace std;
 
int main()
{
    string first;
    cout<<"Enter your first string : ";
    cin>>first;

    string second;
    cout<<"Enter your second string : ";
    cin>>second;

    int flag=0;

    if(first.size()>=3 && second.size()>=3)
    {
        for(int i=0;i<3;i++)
        {
            if(first[i]==second[i])
            {
            flag=1;
            }
            else
            {
                cout<<"Oops!  Characters don't match "<<endl;
                return 0;
            }
        }

    }
    else
    {
        cout<<"Not enough Characters!"<<endl;
    }


    if(flag==1)
    {
        cout<<"Hurray ! First three characters of the string are matched "<<endl;
    }

    return 0;
}