#include<iostream>
using namespace std;
int main()
{
   //selection control structure if else
   int age;
   cout<<"tell me your age?"<<endl;
   cin>>age;
   if((age<18) && (age>0)){
    cout<<"you cannot enter to my party"<<endl;

   }
    else if(age==18){
        cout<<"you are a kid u need kid pass for the party"<<endl;
    
    }
    else if (age<1){
        cout<<"you are not born yet";
    }
    
    else{
        cout<<"you can come to my party";
    }

    return 0;
}