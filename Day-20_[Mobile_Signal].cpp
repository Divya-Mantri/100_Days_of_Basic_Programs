#include<iostream>
using namespace std;
 
int main()
{
    string network_type;
    cout<<"Enter the network type in capital letters (GSM/EDGE/UMTS/HSPA/HSPA++/NR)::";
    cin>>network_type;
    
    if(network_type=="GSM" || network_type=="EDGE")
    {
        cout<<"Mobile Signal is 2g"<<endl;
    }
    else if(network_type=="UMTS" || network_type=="HSPA" || network_type=="HSPA++")
    {
        cout<<"Mobile Signal is 3g"<<endl;
    }
    else if(network_type=="LTE")
    {
        cout<<"Mobile Signal is 4g"<<endl;
    }
    else if(network_type=="NR")
    {
        cout<<"Mobile Signal is 5g"<<endl;
    }
    else
    {
        cout<<"Invalid input!"<<endl;
    }
}