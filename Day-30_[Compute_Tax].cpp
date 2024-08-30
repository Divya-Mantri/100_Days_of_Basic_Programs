#include<iostream>
using namespace std;

void check(float &salary)
{
    while(cin.fail()||cin.peek()!=('\n'))
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');
        
        cout<<"Invalid input!!....Please Enter the salary again ::"<<endl;
        cin>>salary;
    }
}

void computeTax(float salary)
{
    if(salary>=0 && salary<7150)
    {
        float base_tax=0;

        float Amount_Above_Threshold=salary-0;
        cout<<"Amount Above Threshold is :: "<<Amount_Above_Threshold<<endl;    

        float additional_tax=Amount_Above_Threshold*0.10;
        cout<<"Additional Tax is :: "<<additional_tax<<endl;

        cout<<"Your Total Tax Amount is :: "<<additional_tax+base_tax<<endl;

    }
    else if(salary>=7150 && salary<29050)
    {
        float base_tax=715;

        float Amount_Above_Threshold=salary-7150;
        cout<<"Amount Above Threshold is :: "<<Amount_Above_Threshold<<endl;

        float additional_tax=Amount_Above_Threshold*0.15;
        cout<<"Additional Tax is :: "<<additional_tax<<endl;

        cout<<"Your Total Tax Amount is :: "<<additional_tax+base_tax<<endl;
    }
    else if(salary>=29050 && salary<70350)
    {
        float base_tax=4000;

        float Amount_Above_Threshold=salary-29050;
        cout<<"Amount Above Threshold is :: "<<Amount_Above_Threshold<<endl;

        float additional_tax=Amount_Above_Threshold*0.25;
        cout<<"Additional Tax is :: "<<additional_tax<<endl;

        cout<<"Your Total Tax Amount is :: "<<additional_tax+base_tax<<endl;
    }
    else if(salary>=70350)
    {
        float base_tax=14325;

        float Amount_Above_Threshold=salary-70350;
        cout<<"Amount Above Threshold is :: "<<Amount_Above_Threshold<<endl;

        float additional_tax=Amount_Above_Threshold*0.28;
        cout<<"Additional Tax is :: "<<additional_tax<<endl;

        cout<<"Your Total Tax Amount is :: "<<additional_tax+base_tax<<endl;
    }

};

int main()
{
    float salary;
    cout<<"Enter your salary ::";
    cin>>salary;

    check(salary);

    computeTax(salary);
    cout<<endl;
    


    return 0;
}
