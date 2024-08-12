#include<iostream>
using namespace std;
    
 
int main()
{
    //Declare & Initilazed a variable i to 1 
    int i=1;

    // Iterating i from 1 to 100
    for(int i=1;i<=100;i++)
    {
        if(i==100)      //checking if i is equal to 100 or not , becoz after 100 we don't want any hypen so compiler will execute this statement in that case
        {
           cout<<i;
        }
        else            //if not then execute this formatted statment 
        {
            cout<<i<<"-";
        }
            
    }

    cout<<endl;


    return 0;
}
