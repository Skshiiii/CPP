#include<iostream>
// there are two types of header files
// 1.system header files - written by system
// 2. user defined header files - written by programmer
// #include "this.h"--> this will produce error if this file is not present in my directory
//The <bits/stdc++. h> is a header file. 
//This file includes all standard library. 
//Sometimes in some coding contests, when we have to save time while solving, 
//then using this header file is helpful.
using namespace std;
int main()
{
    int a=4, b=5;
    cout<<"operartors in c++"<<endl;
    //this is arithemtic operators:
    cout<<"the value of a+b is: "<<a+b<<endl;
    cout<<"the value of a-b is: "<<a-b<<endl;
    cout<<"the value of a/b is: "<<a/b<<endl;
    cout<<"the value of a*b is: "<<a*b<<endl;
    cout<<"the value of a%b is: "<<a%b<<endl;

    //this is increment opertaors:
    cout<<"the value of a++ is: "<<a++<<endl;
    cout<<"the value of ++b is: "<<++b<<endl;
     
    //this is decrement operator:
    cout<<"the value of a-- is: "<<a--<<endl;
    cout<<"the value of --b is: "<<--b<<endl;

    //assignmeent operator
    //int a=5,b=4;

    //comparison operators
    cout<<"the value of a==b is "<<(a==b)<<endl;
    cout<<"the value of a!=b is "<<(a!=b)<<endl;
    cout<<"the value of a>=b is "<<(a>=b)<<endl;
    cout<<"the value of a<=b is "<<(a<=b)<<endl;
    cout<<"the value of a>b is "<<(a>b)<<endl;
    cout<<"the value of a<b is "<<(a<b)<<endl;

    //logical operators
    cout<<"the value of (a==b)&&(a<b) is "<<((a==b) && (a<b)) <<endl;
    cout<<"the value of (a==b) || (a<b) is "<<((a==b) || (a<b)) <<endl;

    return 0;
}