#include<iostream>
using namespace std;
 
int main()
{
    char alphabets[5];

    cout<<"Enter the five alphabets :: "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>alphabets[i];
    }

    for(int i=0;i<5;i++)
    {
        cout<<alphabets[i]<<" ";
    }
}