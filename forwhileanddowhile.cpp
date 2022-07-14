#include <iostream>
using namespace std;
int main()
{
    /* loops in c++
    there are three types of loops in c++
    1. for loop
    2. while loop
    3. do while loop*/

    //int i=1;
    // cout<<i;
    //i++;

    //syntax for  for loop
    //for(initialization; condition; updation)
    //{
        //loop body(c++ code)
    //}

    // for (int i = 0; i <=40; i++)
    // {
    //     cout<<i<<endl;
    // }
    
    // for (int i; i<10; i++)
    // {
    //     cout<<"i can do it"<<endl;
    // }
    //example for infinite for loop
    // for (int i; 39<40; i++)
    // {
    //     cout<<i<<endl;
    // }

    //while loop in c++
    //syntax for while loop
    // while(condition)
    // {
    //     c++ statement
    // }
    //printing 1 to 40 using while loop
    // int i=1;
    // while(i<=40)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    //do while loop
    // //syntax
    // do{
    //     c++ statement;
    //}while (condition);
    //printing 1 to 4

    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // } while(i<=4);
    //writing table of 2
     int i=1;
     do{
        cout<<"6*"<<i<<"="<<(6*i)<<endl;
        i++;
     }while(i<=10);
    

    return 0;
}