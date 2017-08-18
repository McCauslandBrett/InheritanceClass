#include <iostream>
#include "derivedclass.h"
using namespace std;
void Test_construct_desctruct();

int main()
{
    system("clear");
    cout << "Hello World!" << endl<<endl;
    Test_construct_desctruct();



    return 0;
}

void Test_construct_desctruct()
{
    //test defualt construct
//       DerivedClass<int,int> r;
//        r.connectionTest();
//        r.status();

    //test assignment construct 1
        DerivedClass<int,int> r1(2,6,"hi",7);
        r1.print_basevar1();
        r1.print_basevar2();
        r1.print_derivedVar1();
        r1.print_derivedVar2();
}
