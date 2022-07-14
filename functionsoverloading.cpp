#include<iostream>
using namespace std;

int sum(int a, int b)
{
    cout<<"using function with two arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c)
{
    cout<<"using function with three arguments"<<endl;
    return a+b+c;
}

//calculate volume of cylinder
int volume(double r, int h)
{
    cout<<"processing r and h for cylinder"<<endl;
    return(3.14*r*r*h);
}

//calculating volume of cube
int volume(int a)
{
   cout<<"processing a for cube"<<endl;
    return (a*a*a);
}

//rectangular box
int volume(int l, int b, int h)
{
    cout<<"processing l b h for rectangle"<<endl;
    return (l*b*h);
}

int main()
{
    cout<<"the sum of 3 and 6 is :"<<sum(3, 6)<<endl;
    cout<<"the sum of 3, 7 and 6 is: "<<sum(3, 7, 6)<<endl;
    cout<<"the volume of cylinder is: "<<volume(2, 3)<<endl;
    cout<<"the volume of cube is: "<<volume(5)<<endl;
    cout<<"the volume of rectangle box is: "<<volume(3, 7, 6)<<endl;

    return 0;
}