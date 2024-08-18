#include<iostream>
using namespace std;

/* 
temperature description

100-50 super hot
49-38 hot
37-30 normal
29-16 cold
15-0 super cold
*/

int main()
{
    float temperature;
    cout<<"Enter the temperature to know how's the weather ::";
    cin>>temperature;

    while(cin.fail() || cin.peek()!=('\n'))
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');

        cout<<"Invalid input!......Please enter the correct temperature ::"<<endl;
        cin>>temperature;
    }

    if(temperature>=50)
    {
        cout<<"Warning..It's Super HOT here!"<<endl;
    }
    else if(temperature>=38 && temperature<=49)
    {
        cout<<"It's Hot here!"<<endl;
    }
    else if(temperature>=30 && temperature<=37)
    {
        cout<<"Chill ...The Weather is Normal!"<<endl;
    }
    else if(temperature>=16 && temperature<=29)
    {
        cout<<"It's Cold Here!"<<endl;
    }
    else if(temperature<=15)
    {
        cout<<"Warning! The Weather is too Cold!"<<endl;
    }


    return 0;
}