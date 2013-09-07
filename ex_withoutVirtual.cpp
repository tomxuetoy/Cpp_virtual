#include <iostream>
using namespace std;
 
class Parent
{
public:
    Parent() {
        cout<<"Parent Constructor"<<endl;
    };
    ~Parent() {
        cout<<"Parent Destructor"<<endl;
    };
};
 
class Child : public Parent
{
public:
    Child() {
        cout<<"Child Constructor"<<endl;
    };
    ~Child() {
        cout<<"Child Destructor"<<endl;
    };
};
 
int main()
{
    Child* c_ptr = new Child;
    delete c_ptr;
    cout<<"-----------------"<<endl;
    Parent* p_ptr = new Child;
    delete p_ptr;
    cout<<"-----------------"<<endl;
    Child c;
};
/*
$ a.exe
Parent Constructor
Child Constructor
Child Destructor
Parent Destructor
-----------------
Parent Constructor
Child Constructor
Parent Destructor
-----------------
Parent Constructor
Child Constructor
Child Destructor
Parent Destructor
 
 * */
