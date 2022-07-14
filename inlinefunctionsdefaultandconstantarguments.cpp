#include<iostream>
using namespace std;

inline int product(int a, int b)
{
    //do not recommended to use below lines with inline functions
    // static int c=0;//this executes only once
    // c = c+1;
    // return a*b+c;
    return a*b;
}

float moneyReceived(int currentMoney, float factor=1.04) //write compulsory argument first and default argument later
{
    return currentMoney*factor;
}

int strlen(const char *p) //when we want no modification in our element
{

}

int main ()
{
    //inline functions
    // int a, b;
    // cout<<"enter the value of a and b: "<<endl;
    // cin>>a>>b;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;

    int money = 100000;
    cout<<"If you have"<<money<<" Rs in your bank account, you will receive"<<moneyReceived(money)<<"RS. after 1 year"<<endl;
    cout<<" for VIP If you have"<<money<<" Rs in your bank account, you will receive"<<moneyReceived(money, 1.10)<<"RS. after 1 year"<<endl;
    
    return 0;
}