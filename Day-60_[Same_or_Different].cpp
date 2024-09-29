#include<iostream>
using namespace std;
 
//Program to check same or different words
int main()
{
    string word1;
    cout<<"Enter the first word : ";
    cin>>word1;

    string word2;
    cout<<"Enter the second character : ";
    cin>>word2;

    int flag=1;

    if(word1.size()==word2.size())
    {
        for(int i=0;i<word1.size();i++)
        {
            if(word1[i]==word2[i])
            {
                continue;
            }
            else
            {
                flag=0;
                 cout<<"Characters at position "<<i+1<<" are different : "<<word1[i]<<" vs "<<word2[i]<<endl;
            }
        }

    }
    else
    {
        cout<<"OOps! Please Enter the words of same length first...."<<endl;
        return 0;
    }

    if(flag==1)
    {
        cout<<"Hurray! Both words have the same characters at all positions "<<endl;
    }
    else
    {
        cout<<"Oops! We have got Different Words...." <<endl;
    }

    return 0;

}