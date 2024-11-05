#include<iostream>
using namespace std;

//Program to remove special characters from given string 

bool specialchar(char c)
{
    return (!isalpha(c) && !isdigit(c) && !isspace(c));
}

int main()
{
    string str;
    cout<<"Enter the string : ";
    cin>>str;

    int length=str.size();
    for(int i=0;i<length;i++)
    {
        if(specialchar(str[i])==true)
        {
            for(int j=i;j<length-1;j++)
            {
                str[j]=str[j+1];
            }
            length--;
            i--;
        }
    }

    str.resize(length);
    if(str.length()==0)
    {
        cout<<"There's no string left after removing special characters !"<<endl;
    }
    else
    {
        cout<<str<<endl;
    }

}