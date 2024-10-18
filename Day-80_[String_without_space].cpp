#include<iostream>
using namespace std;

//Program to print string without space  
int main()
{
    string message="Hey everyone ...Here I'm Learning C++ yet !";
    int length=message.size();

    for(int i=0;i<length;i++)
    {
       if(message[i] == ' ')
       {
            for(int j=i;j<length-1;j++)
            {
                message[j]=message[j+1];
            }
        length--;
       }

    }

    message.resize(length);
    cout<<"String after removing white spaces is : "<<message<<endl;

    return 0;
}