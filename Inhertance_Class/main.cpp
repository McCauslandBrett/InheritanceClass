#include <iostream>
#include "derivedclass.h"
using namespace std;
void Test_construct_desctruct();
void How_to();

/* This is a boiler plate for any project that uses basic Inhertance structure
 * Notes for proper use are at the bottom of the page
 * Page will be updated in effort to reach the right balnce of generic reusablity and comprehensiveness
 * It very incomplete and if becomes usefull will be filled in
*/
int main()
{
    system("clear");
   // cout << "Hello World!" << endl<<endl;
    //Test_construct_desctruct();
    How_to();


    return 0;
}

void Test_construct_desctruct()
{
    //test defualt construct
       DerivedClass<int,int> r;
        r.connectionTest();
        r.status();

    //test assignment construct 1
        DerivedClass<int,int> r1(2,6,"hi",7);
        r1.print_basevar1();
        r1.print_basevar2();
        r1.print_derivedVar1();
        r1.print_derivedVar2();
}
void How_to()
{
    //Access to a redefined base function
    DerivedClass<int,int> r1(2,6,"hi",7);
    r1.BaseClass::status();
    // These are both legal!
        BaseClass<int,int> &B= r1;
        BaseClass<int,int> *Bp = &r1;


}
/* CONSTRUCTORS & DECONSTRUCTORS
 * constructors and deconstructors in the base class are not inherted in the derived class
 * defualt constructor is called if you do not invoke a constructor in derived class
 * Object builds base first , It builds inside out
 * Object deconstructs from outside in, derived class first
 * Deconstructor
 * It is the job of the base class deconstructor to invoke delete on the inherted member variables
 * Derived class must invoke delete on all data it is pointing to
 * Base class of course is equally responsible for any of its member variables or allocated memory
 */

/* COPY CONSTRUCTORS & ASSIGNMENT OPERATOR
 * copy constructors are not inherted
 * If no copyconstructor is defined it will create a defualt one But it will not work if there are pointes or dynamic allocation of memory
 * If your class uses dynamic allocation or pointers you must define a copy constructor
 * the assigment operator = will not be inherted , If the base class defines the assignment operator and the derived class does not then
 * the base class will have an assignment operator but it wil be the assignment operator defined by the C++ not the one defined in base
 */
/* REDEFINING VS OVERLOADING
 * def: Redefining is writeing the function in the derived class that is all ready in the base class to perform a difrent operation
 * def: Overloading is writing another version of a function with a difret number of parameters
 * Not the same
 * If you are trying to redefine make sure you are carful to get the signiture correct
  */

 /* BASE VARARIBLES
  * Must be accessed and maipulated with a call to base member functions
  * You cannot mention a private inherted mamber variable by name in derived class
  *
  *
  *
 */

/* PRIVATE MEMBER FUNCTIONS OF BASE CLASS
 * private member functions are not accessable outside of base class by name just like inherted varibles
 * Helper functions for the base class should be made private
 *
 */

  /* INHERTED PROTECTED
   * If you use the qualifyer Protected before an member function of a base class they are inherited as if they where
   * marked protected in the derived class
   *
   * If a member is marked protected in a base then it can be accessed by name in all derived classes
   *
   */














