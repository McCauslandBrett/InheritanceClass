#include <iostream>
#include "derivedclass.h"
using namespace std;

int main()
{
    system("clear");
    cout << "Hello World!" << endl;
    DerivedClass<int,int> r;
    r.connectionTest();
    return 0;
}

