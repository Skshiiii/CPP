#include<iostream>
using namespace std;
int c=45;
int main()

{
//Built in data type
//float,double and long double

//  int a,b,c;
//  cout<<"enter the value of a:";
//  cin>>a;
//  cout<<"enter the value of b: ";
//  cin>>b;
//  c=a+b;
//  cout<<"the sum is: "<<c<<endl;
//  cout<<"the global c is:"<<::c;

//  float d = 34.4f;
//  long double e= 34.4l;
//  cout<<"the value of d is: "<<d<<"\n the value of e is :"<< e;
//  cout<<"the size of 34.4f is: "<<sizeof(34.4f)<<endl;
//  cout<<"the size of 34.4F is: "<<sizeof(34.4F)<<endl;
//  cout<<"the size of 34.4l is: "<<sizeof(34.4l)<<endl;
//  cout<<"the size of 34.4L is: "<<sizeof(34.4L)<<endl;


//reference Variables
//tushar--->chotu---->gulabo
// float x=455;
// float & y =x;
// cout<<x <<endl;
// cout<<y<<endl;


//typecasting
int a=45;
float b=45.6;

cout<<"the value of a is :"<<a<<endl;
cout<<"the value of a is :"<<(float)a<<endl;
cout<<"the value of b is: "<<(int)b<<endl;
cout<<"the value of b is: "<<(int(b))<<endl;
cout<<"the value of b is: "<<int(b)<<endl;
int c= int(b);
cout<<"the expression is "<<a+b<<endl;
cout<<"the expression is "<<a+int(b)<<endl;
cout<<"the expression is "<<a+(int)b<<endl;


    return 0;
}