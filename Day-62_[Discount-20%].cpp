#include<iostream>
using namespace std;

//Program for calculating price after 20% Discount
int main()
{
    float original_price;
    cout<<"Enter the original price : ";
    cin>>original_price;

    while(cin.fail()||cin.peek()!=('\n'))
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');

        cout<<"Invalid input!!....Please enter the input again : "<<endl;
        cin>>original_price;
        
    }
    
    float discount;
    discount= (original_price*(float)20/100);
    cout<<"Discount is : "<<discount<<endl;
    cout<<"Final Price is : "<<(original_price-discount)<<endl;

    return 0;
}