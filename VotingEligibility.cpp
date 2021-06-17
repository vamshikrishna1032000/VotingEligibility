#include<iostream>
using namespace std;
int main()
     {
       int age;
       cout<<"Hello! \nTo check your eligibility:\nEnter your age: ";
       cin>>age;
       if(age>=18)
       {
       cout<<"Congratulations! \nYou are eligible for voting.";
       }
       else
       {
       cout<<"Sorry! You are still not eligible for voting.\n";
       cout<<"You can wait for "<<18-age<<" year(s).";
       }
       return 0;
       }
