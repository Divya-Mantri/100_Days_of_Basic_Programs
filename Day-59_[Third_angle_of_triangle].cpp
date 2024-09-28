#include<iostream>
using namespace std;

//Program to find the third angle of a triangle
int main()
{
    int first_angle;
    cout<<"Input the 1st angle of the triangle : ";
    cin>>first_angle;

    int second_angle;
    cout<<"Input the 2nd angle of the traingle : ";
    cin>>second_angle;

    int third_angle;
    third_angle=180-(first_angle+second_angle);

    cout<<"The 3nd angle of the traingle is : "<<third_angle<<endl;


    return 0;
}