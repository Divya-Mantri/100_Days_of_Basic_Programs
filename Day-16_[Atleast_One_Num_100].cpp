#include<iostream>
using namespace std;
 
int main()
{
    int total_numbers;
    cout<<"Enter the total number of numbers you want to give ::";
    cin>>total_numbers;

    while (cin.fail() || cin.peek()!=('\n'))
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');

        cout<<"Invalid input!..Please enter a valid integer ::"<<endl;
        cin>>total_numbers;
    }
    

    float numbers[total_numbers];
    cout<<"Enter the numbers ::"<<endl;

    for(int i=0;i<total_numbers;i++)
    {
        cin>>numbers[i];
        
        while (cin.fail() || cin.peek()!=('\n'))
        {
            cin.clear();
            cin.ignore(INT32_MAX,'\n');

            cout<<"Invalid input!.......Please enter a valid input :: "<<endl;
            cin>>numbers[i];
        }
        
    }

    int flag=0;

    for(int i=0;i<total_numbers;i++)
    {
        if(numbers[i]==100)
        {   
            flag=1;
            cout<<"Yes ! there's atleast a number at "<<i+1<<" position which is equal to 100 "<<endl;
            break;
        }
    }

    if(flag!=1)
    {
        cout<<"OOps! There's not any number which is equal to 100 :("<<endl;
    }



    return 0;
}