#include<iostream>
#include<iomanip>
using namespace std;
 
float C_to_F(float temp)
{
    return ((float(temp*9)/5)+32);
}


int main()
{
    float temperature;
    cout<<"Enter the temperature :: ";
    cin>>temperature;


    cout<<"The given temperature in Fahrenheit will be :: "<<C_to_F(temperature)<<" F"<<endl;

    return 0;


}