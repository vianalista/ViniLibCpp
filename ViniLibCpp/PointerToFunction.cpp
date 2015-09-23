#include "iostream"
#include "PointerToFunction.h"

using namespace std;

/**
 * The typical use of this is for passing a function as an argument to
 * another function, since these cannot be passed dereferenced. 
 * The name of the function is enclosed between parentheses
 * () and an asterisk (*) is inserted before the name.
 */

void ExamplePointerToFunction(void){
  //void MyFunctionA(void)
    void (*NewName)(void);
    /* the ampersand is actually optional */
    NewName = &MyFunctionA;
    
    cout << " + Before call NewName();" << endl;
    NewName();
    cout << " + After call NewName();" << endl;
}

void MyFunctionA(void){
    cout << "  + MyFunctionA" << endl;
}