#include<iostream>
#include<string>
using namespace std;

class binary{
    string s;
public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary :: read(void)
{
    cout<<"Enter a Binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin(void)
{
    for (int i=0; i<s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void binary :: ones_compliment(void)
{
    for (int i=0; i<s.length(); i++)
    {
      if (s.at(i) =='0')
      {
         s.at(i) = '1';
      } 
      else
      {
         s.at(i) = '0';
      } 
    }
}

void binary :: display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for (int i=0; i<s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}





int main()
{
    //OOPS- Classes and objects

    //c++ --> intially called c with classes
    //class--> extension of structures(in c)
    //structures had limitations
            //- members are public
            //- no methods
    // classe--> structure + more
    // classes--> can have methods and properties
    // classes--> can make few members as private and few as public
    // structures --> in c++ are typedefed
    // classes--> we can declare objects along with the class declaration
     /*class Employee
     {
        //class definition
     }sakshi, nidhi, prity;*/

     //sakshi.salary = 8 makes no sense if salary is private

     // Nesting of member function
   
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}