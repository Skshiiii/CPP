#include<iostream>
using namespace std;

class Employee
{
    private:
        int a, b ,c;
    public:
        int d, e;
        void setData(int a1,int b1,int c1); //declaration
        void getData()
        {
            cout<<"the value of a is: "<<a<<endl;
            cout<<"the value of b is: "<<b<<endl;
            cout<<"the value of c is: "<<c<<endl;
            cout<<"the value of d is: "<<d<<endl;
            cout<<"the value of e is: "<<e<<endl;

        };
};

class Animal
{
    private:
    int milk;
    bool disease;
    public:
    int legs, eyes, horn;
    void setData(int milk, bool ill);
    void getData()
    {
        cout<<"hoe much milk does it give in a day:"<<milk<<endl;
        cout<<"is that animal sick: "<<disease<<endl;
        cout<<"how many legs does animal have: "<<legs<<endl;
        cout<<"how many eyes does animal has: "<<eyes<<endl;
        cout<<"how many horns does animal has: "<<horn<<endl;
    };

};

void Animal :: setData( int litre, bool ill)
{
    milk=litre;
    disease=ill;
}

void Employee :: setData(int a1, int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;
}



int main()
{
    Employee Sakshi;
    //harry.a = 134;  // this will throw error as a is private data
    Sakshi.d = 34;
    Sakshi.e = 39;
    Sakshi.setData(1,2,4);
    Sakshi.getData();
  
    Animal Cow;
    Cow.legs = 4;
    Cow.eyes = 2;
    Cow.horn = 2;
    Cow.setData(3,0);
    Cow.getData();
    

    return 0;
}

