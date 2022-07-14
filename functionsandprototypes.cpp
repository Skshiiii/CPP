#include<iostream>
using namespace std;
//function prototype
//type function-name (arguments);
// int sum(int a, int b); //--->acceptable
// int sum(int a, b); //----> not acceptable
// int sum(int, int); //--->acceptable
int sum (int, int);
//void g(void); ----> acceptable
void g(); //----> acceptable

// int sum(int a, int b){
//     int c=a+b;
//     return c;
// }
int main()
{
    int num1, num2;
    cout<<"Enter first number:"<<endl;
    cin>>num1;
    cout<<"Enter second number:"<<endl;
    cin>>num2;
    //num1 and num2 are actual parameters
    cout<<"The sum of the numbers is:"<<sum(num1, num2)<<endl;
    g();
    return 0;
}
int sum(int a, int b){
    //formal parameters a and b will be taking values from actual
    //parameters num1 and num2
    int c=a+b;
    return c;
}

void g(){
    cout<<"hello good work";
}