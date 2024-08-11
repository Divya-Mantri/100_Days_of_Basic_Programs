#include<iostream>
using namespace std;
 
int main()
{
    //Initialized a min variable to store minutes
    int minutes;

    //Prompt to the user
    cout<<"Enter the minute you want to convert in seconds::";

    //read input
    cin>>minutes;

    while(cin.fail()||cin.peek()!='\n'|| (minutes<0))
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');
        
        cout<<"Invalid input!........Please enter a valid integer::"<<endl;
        cin>>minutes;
    } 


    // calculate seconds & display
    cout<<minutes<<" minute"<<(minutes==1 ?"":"s")<<" is equals to :: "<< minutes*60<<(minutes*60 ==1 ? "":"s")<<endl;


    return 0;
}