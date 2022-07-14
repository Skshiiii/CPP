#include<iostream>
using namespace std;

// int factorial(int n)
// {
//     if (n<=1)
//     {
//         return n;
//     }
//     return n*factorial(n-1);
// }
//step by step preceding of factorial of 4
// factorial(4)= 4*factorial(3);
// factorial(3)= 3*factorial(2);
// factorial(2)= 2*factorial(1);
// factorial(1)= 1;

int fib(int n)
{
    if (n<2)
    {
        return 1;
    }
    return fib(n-2) + fib(n-1);
}
//working of fibonacci
// fib(5)
// fib(4)+fib(3)
// fib(2)+fib(3)+fib(2)+fib(3)

int main()
{
    //factorial of a number;
    //6!=6*5*4*3*2*1=720
    //0!= 1 by definition
    //1!= 1 by definition
    //n!= n*(n-1)!
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    // cout<<"factorial of "<<a<<"is"<<factorial(a)<<endl;
    cout<<"fibonacci term of "<<a<<"is"<<fib(a)<<endl;
    
    return 0;
}