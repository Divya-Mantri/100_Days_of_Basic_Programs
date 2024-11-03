#include<iostream>
using namespace std;

//Program to print previous & next alphabets of the given alphabets 
int main()
{
    char alphabet;
    cout<<"Enter the alphabet : ";
    cin>>alphabet;


    char previous=alphabet-1;
    char next=alphabet+1;

    if(alphabet=='a' || alphabet=='A')
    {
        cout<<"There's no previous alphabet !"<<endl;
        cout<<"Next alphabet from the given alphabet is : "<<next<<endl;
    }
    else if(alphabet=='z'|| alphabet=='Z')
    {
        cout<<"Previous alphabet from the given alphabet is : "<<previous<<endl;
        cout<<"There's no next alphabet !"<<endl;
    }
    else
    {
        cout<<"The previous alphabet from the given alphabet is : "<<previous<<endl;
        cout<<"The next alphabet from the given alphabet is : "<<next<<endl;
    }

    return 0;

}