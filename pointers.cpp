#include<iostream>

using namespace std;
int main()
{
    //what is pointer? --> date type which holds the address of other data types.
    int a=3;
    int* b= &a;
    //& ----> address of operator
    cout<<"the address of a is"<< b<<endl;
    cout<<"the address of a is"<<&a<<endl;
    //* ---->dereference operator
    cout<<"the value at address b is"<<*b<<endl;

    //pointer to pointer
    int** c=&b;
    cout<<"address of pointer b "<<&b<<endl;
    cout<<"the address of b is "<<c<<endl;
    cout<<"value at address c"<<*c<<endl;
    cout<<"value at value at address of c"<<**c<<endl;
    return 0;
}