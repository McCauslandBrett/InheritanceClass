#ifndef BASECLASS_H
#define BASECLASS_H
#include"iostream"
using namespace std;

template <typename t1,typename t2>
class BaseClass
{
public:
    BaseClass();
    void connectionTest();
    ~BaseClass();
};
template <typename t1,typename t2>
BaseClass< t1, t2>::BaseClass()
{

}
template <typename t1,typename t2>
BaseClass< t1, t2>::~BaseClass()
{

}
template <typename t1,typename t2>
void BaseClass< t1, t2>::connectionTest()
{
    cout<<"connected to base class"<<endl;
}

#endif // BASECLASS_H
