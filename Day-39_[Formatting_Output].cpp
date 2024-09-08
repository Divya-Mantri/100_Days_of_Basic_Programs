#include<iostream>
#include<iomanip>
using namespace std;
 
int main()
{
    cout<<setfill('-')<<setw(50)<<"Formatting the output----------"<<'\n'<<'\n';

    float pi_value=3.14159265;
    cout<<setfill(' ')<<setw(100)<<"The pi value printed bydefault in float datatype is :: "<<pi_value<<endl;

    cout<<setw(100)<<"The value of pi after setting precision upto 10 decimal places in float datatype is ::"<<setprecision(10)<<pi_value<<endl;         //When you print more digits than it can store, the extra digits you see are the result of this approximation.

    

    double pi=3.14159265;
    cout<<setw(100)<<"The pi value printed bydefault in double datatype is :: "<<pi<<endl;
    cout<<setw(100)<<"The value of pi after setting precision upto 10 decimal places in double datatype is :: "
    <<setprecision(15)<<pi<<endl;       //whereas it gives the accurate result


  




}