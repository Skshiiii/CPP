#include<iostream>
using namespace std;
// int sum(int a, int b){
//     int c= a+b;
//     return c;
//}
//this will not swap
 int swap(int a,int b){  //temp a b
     int temp=a;         //  4  4 5
     a=b;                //  4  5 5
     b=temp;             //  4  5 4
     
 }

//call by reference using pointers
void swapPointer(int* a, int* b){
    int temp= *a;
    *a = *b;
    *b = temp;
}

//call by reference using c++ reference variables
// int & swapReferenceVar(int &a, int &b){
//     int temp= a;
//     a = b;
//     b = temp;
//     return a;
// }
void swapReferenceVar(int &a, int &b){
    int temp= a;
    a = b;
    b = temp;
}


int main()
{
    int x=4, y=5;
    cout<<"the value of x is : "<<x<<endl;
    cout<<"the value of y is : "<<y<<endl;
    // swap(x, y); ---->this will not swap
    //swapPointer(&x, &y); ----> this will swap a and b using pointers
    //swapReferenceVar(x, y) = 766; //---->this will swap using reference variable
    swapReferenceVar(x, y); //---->this will swap using reference variable
    cout<<"the swapped value of x is : "<<x<<endl;
    cout<<"the swapped value of y is : "<<y<<endl;



    return 0;
}