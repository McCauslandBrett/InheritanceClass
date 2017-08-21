#ifndef DERIVEDCLASS_H
#define DERIVEDCLASS_H
#include "baseclass.h"
using namespace std;
template <typename t1,typename t2>
class DerivedClass: public BaseClass<t1, t2>
{
public:
    //Constructors
    DerivedClass();
    DerivedClass(t1 Derived_Var1, t2 Derived_Var2, string Base_Var1, int Base_Var2);
    //Destructor
    ~DerivedClass();
    //Accessors
    void print_derivedVar1()const;
    void print_derivedVar2()const;
    //Mutatators

     //Copy Constructor
    DerivedClass(const DerivedClass<t1, t2> &object);

    //overriden
    void status() const;

    //Operators

     DerivedClass<t1,t2>& operator = (const DerivedClass<t1,t2>& right_side);


 private:
    t1 var1;
    t2 var2;
    //Helper Functions

};
 //Constructors
template <typename t1,typename t2>
DerivedClass<t1, t2>::DerivedClass()
{
    cout<<"derived class constructor"<<endl<<endl;
}
template <typename t1,typename t2>
DerivedClass<t1, t2>::DerivedClass(t1 Derived_Var1,t2 Derived_Var2,string Base_Var1,int Base_Var2): BaseClass<t1,t2>(Base_Var1,Base_Var2)
{
    var1=Derived_Var1;
    var2=Derived_Var2;
}
//Destructor
template <typename t1,typename t2>
DerivedClass<t1, t2>::~DerivedClass()
{
    cout<<"derived class destructor"<<endl<<endl;
}
//Accessors
template <typename t1,typename t2>
void DerivedClass<t1, t2>::print_derivedVar1() const
{
    cout<<var1<<endl<<endl;
}
//Copy Constructor
template <typename t1,typename t2>
DerivedClass<t1, t2>::DerivedClass(const DerivedClass<t1, t2>& object)
{

}

 //Operators
 template <typename t1,typename t2>
 DerivedClass<t1,t2>& DerivedClass<t1,t2>:: operator = (const DerivedClass<t1,t2>& right_side)
 {
        //BaseClass::operator=(right_side);
 }

//Member Functions
template <typename t1,typename t2>
void DerivedClass<t1, t2>::status() const
{
    cout<<"status in Derived class"<<endl<<endl;
}
template <typename t1,typename t2>
void DerivedClass<t1, t2>::print_derivedVar2() const
{
    cout<<var2<<endl<<endl;
}

#endif // DERIVEDCLASS_H
