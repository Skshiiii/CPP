#include<iostream>
using namespace std;
int main()
{
    //making array for marks
    int marks[4]={23,45,56,89};
    int mathmarks[4];
    mathmarks[0]=2278;
    mathmarks[1]=738;
    mathmarks[2]=378;
    mathmarks[3]=578;
    cout<<"these are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    
    //we change the value of an array like this also
    marks[2]=45;
    cout<<"these are marks"<<endl;

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    //writing marks using for loop
    // for(int i=0; i<4; i++)
    // {
    //     cout<<"the value of marks "<<i<<"is"<<marks[i]<<endl;
    // }

    //writing marks using while loop
    // int i=0;
    // while(i<4){
    //     cout<<"marks of"<<i<<"is: "<<marks[i]<<endl;
    //     i++;
    // }

    //writing marks using do while loop
    // int i=0;
    // do{
    
    //     cout<<"marks of"<<i<<"is: "<<marks[i]<<endl;
    //        i++;
    // }while(i<4);

    //using pointers in arrays
    int* p=marks;
    // cout<<"the value of marks[0] is"<<*p;
    // cout<<"the value of marks[1] is"<<*(p+1)<<endl;
    // cout<<"the value of marks[2] is"<<*(p+2)<<endl;
    // cout<<"the value of marks[3] is"<<*(p+3)<<endl;

    cout<<*p++<<endl;
    cout<<*(++p);
    return 0;
}