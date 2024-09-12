#include<iostream>
#include<iomanip>
using namespace std;
 
int main()
{
    int time_hour,minutes;
    cout<<"Enter time hour :: ";
    cin>>time_hour;
    
    if(time_hour>12 || time_hour<1)
    {
        cout<<"Invalid Time_hour!"<<endl;
        return 0;
    }

    cout<<"Enter minutes ::";
    cin>>minutes;

    if(minutes>59 ||minutes<0)
    {
        cout<<"Invalid Minutes!"<<endl;
        return 0;
    }

    char day_time;
    cout<<"Enter the day-time i.e  A for AM or P for PM :: ";
    cin>>day_time;

  
    if((day_time=='A' || day_time=='a') && time_hour!=12)
    {
        cout<<"The time in 24 hour-time format is :: "<<time_hour<<":"<<setfill('0')<<setw(2)<<minutes<<" AM"<<endl;
    }
    else if((day_time=='P' || day_time=='p') && time_hour!=12)
    {
        cout<<"The time in 24 hour-time format is :: "<<time_hour+12<<":"<<setfill('0')<<setw(2)<<minutes<<" PM"<<endl;
    }
    else if((day_time=='A' || day_time=='a') && time_hour==12)
    {
        cout<<"The time in 24 hour-time format is :: 00:"<<setfill('0')<<setw(2)<<minutes<<" AM"<<endl;
    }
    else if((day_time=='P' || day_time=='p') && time_hour==12)
    {
        cout<<"The time in 24 hour-time format is :: "<<time_hour<<":"<<setfill('0')<<setw(2)<<minutes<<" PM"<<endl;
    }
    else
    {
        cout<<"Invalid day-time format !!"<<endl;
    }

    return 0;
}