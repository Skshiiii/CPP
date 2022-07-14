#include <iostream>
using namespace std;

// struct employee
//     {
//         int eid;
//         char favchar;
//         float salary;
//     };
typedef struct employee
    {
        int eid;
        char favchar;
        float salary;
    }ep;

union money
{
    int rice;
    char car;
    float pounds;
};

int main ()
{
    enum Meal{ breakfast, lunch, dinner};
    Meal m1=breakfast;
    cout<<m1;
    cout<<(m1!=1);
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;
    
    
    // struct employee sakshi;
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'b';
    // cout<<m1.car;
    
    // ep sakshi;
    // struct employee prity;
    // struct employee nidhi;

    // {
    //     sakshi.eid = 1;
    //     sakshi.favchar ='c';
    //     sakshi.salary = 120000000;
        
    //     cout<<"the value is"<<sakshi.eid<<endl;
    //     cout<<"the value is"<<sakshi.favchar<<endl;
    //     cout<<"the value is"<<sakshi.salary<<endl;
    

    // };
    
    return 0;
}