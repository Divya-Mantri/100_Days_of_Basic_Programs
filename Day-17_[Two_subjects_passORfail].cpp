#include<iostream>
using namespace std;
 
int main()
{
   float sub1,sub2;
   cout<<"Enter the marks of subject 1 out of 100::";
   cin>>sub1;

   while (cin.fail() || sub1>100 || cin.peek()!=('\n'))
   {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');
        cout<<"Invalid Marks!........Please enter the correct marks::"<<endl;
        cin>>sub1;
   }


   cout<<"Enter the marks of subject 2 out of 100::";
   cin>>sub2;

   while (cin.fail() || sub2>100 ||cin.peek()!=('\n'))
   {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');

        cout<<"Invalid !..........Please enter the correct marks ::"<<endl;
        cin>>sub2;
   }

   if(sub1<35 && sub2<35)
   {
        cout<<"Oops! Failed in both :(.........Better luck next time :)"<<endl;
   }
   else if(sub1<35)
   {
        cout<<"Umm..Failed in a subject which is subject 1.....:("<<endl;
        cout<<"But Hey you can do it better you know ......just never give up :)"<<endl;
   }
   else if(sub2<35)
   {
        cout<<"Umm..Failed in a subject which is subject 2.....:("<<endl;
        cout<<"But Hey you can do it better you know ......just never give up :)"<<endl;
   }
   else
   {
        cout<<"Congratulations!.........Woah YOu passed the exam..........Keep it up :)"<<endl;
   }


   

    return 0;

}