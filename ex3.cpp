#include <iostream>
using namespace std;
 
class Parent
{
public:
    Parent() {
        cout<<"Parent Constructor"<<endl;
    };
    virtual ~Parent() {
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
    Parent* p_ptr = c_ptr;
    delete p_ptr;
};
/* 
$ a.exe
Parent Constructor
Child Constructor
Child Destructor
Parent Destructor
 
 * */
