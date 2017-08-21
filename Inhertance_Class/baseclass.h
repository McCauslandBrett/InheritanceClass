#ifndef BASECLASS_H
#define BASECLASS_H
#include"iostream"
using namespace std;
/*
 * Baseclass is templated however doesnt make use of templates
 * only templated
 *
 */
template <typename t1,typename t2>
class BaseClass
{
public:
    //Debug Tools
    void connectionTest() const;

     //Constructor
    BaseClass();
    BaseClass(string Var1,int Var2);

    //Destructor
  ~BaseClass();

    //Accessors
    void print_basevar1() const;
     void print_basevar2() const;
    //Mutatators

    //might be redefined (Overriden in derived)

    void status() const;
private:
    string BaseVar1;
     int BaseVar2;
      //Helper Functions

};
template <typename t1,typename t2>
BaseClass< t1, t2>::BaseClass()
{
    cout<<"baseclass constructor"<<endl<<endl;
}
template <typename t1,typename t2>
BaseClass< t1, t2>::BaseClass(string Var1,int Var2)
{
    cout<<"baseclass assignment constructor"<<endl<<endl;
     BaseVar1=Var1;
     BaseVar2=Var2;

}
template <typename t1,typename t2>
BaseClass< t1, t2>::~BaseClass()
{
    cout<<"baseclass deconstructor"<<endl<<endl;
}
template <typename t1,typename t2>
void BaseClass< t1, t2>::connectionTest() const
{
    cout<<"connected to base class"<<endl<<endl;
}
template <typename t1,typename t2>
void BaseClass< t1, t2>::print_basevar1() const
{
    cout<<BaseVar1<<endl<<endl;
}
template <typename t1,typename t2>
void BaseClass< t1, t2>::print_basevar2() const
{
    cout<<BaseVar2<<endl<<endl;
}
template <typename t1,typename t2>
void BaseClass<t1, t2>::status() const
{
    cout<<"status in base class"<<endl<<endl;
}

#endif // BASECLASS_H
