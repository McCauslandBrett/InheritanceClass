#ifndef DERIVEDCLASS_H
#define DERIVEDCLASS_H
#include "baseclass.h"

template <typename t1,typename t2>
class DerivedClass: public BaseClass<t1, t2>
{
public:
    //Constructor
    DerivedClass();
    //Destructor
    ~DerivedClass();
};
template <typename t1,typename t2>
DerivedClass<t1, t2>::DerivedClass()
{

}
template <typename t1,typename t2>
DerivedClass<t1, t2>::~DerivedClass()
{

}


#endif // DERIVEDCLASS_H
