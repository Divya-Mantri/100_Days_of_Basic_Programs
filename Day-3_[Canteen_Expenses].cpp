#include<iostream>
#include<cctype>
using namespace std;

    // int check(int item_no)
    // {
    //      try
    //         {
    //             if(ispunct(item_no)||isalpha(item_no))
    //             {
    //                 cout<<"Alphabet & Punctuation characters are not allowed!"<<endl;
    //             }
    //         }
    //         catch(const std::exception& e)
    //         {
    //             cout<<"Throws an Error!"<< e.what() << '\n';
    //         }
    // };

    int price(int item_no)
    {
        if(item_no==1)
        {
            cout<<"You chose Cold Drink"<<endl;
            return 30;
        }
        else if(item_no==2)
        {
            cout<<"You chose Samosa"<<endl;
            return 20;
        }
        else if(item_no==3)
        {
            cout<<"You chose Biscuit"<<endl;
            return 10;
        }
        else if(item_no==4)
        {
            cout<<"You chose Chai"<<endl;
            return 10;
        }
        else if(item_no==5)
        {
            cout<<"Your chose  Burger"<<endl;
            return 40;
        }
        else
        {    
            while(item_no<1 || item_no>5)
            {
            cout<<"There's no item as such!"<<endl;
                cout<<"Enter the option again:";
                cin>>item_no;            

            }

            return price(item_no);
        }
    };

int main()
{

    int total_items;
    cout<<"Total number of items are :";
    cin>>total_items;
    int sum=0;
    cout<<"List of Items are:"<<endl
        <<"1.Cold Drink"<<endl
        <<"2.Samosa"<<endl
        <<"3.Biscuit"<<endl
        <<"4.Chai"<<endl
        <<"5.Burger"<<endl;

    while(total_items>0)
    {

        int item_no;
        cout<<"Enter the option:";
        cin>>item_no;
        // check(item_no);

        sum=sum+price(item_no);

        total_items--;
        
      
    }

    cout<<"Total Expenses are :"<<sum<<endl;
}