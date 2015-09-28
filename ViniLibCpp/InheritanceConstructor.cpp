#include <iostream>
#include "InheritanceConstructor.h"

using namespace std;

class CMother{
public:
    CMother() {cout << " - CMother: No have parameter." << endl;};
    CMother(int parameter) {cout << " + CMother: Have parameter. " << parameter << endl;};
};

class CNoChoiceConstructor : public CMother{
public:
    CNoChoiceConstructor(int a)
    {cout << "   + CNoChoiceConstructor" << endl;};
};

class CChoiceConstructor : public CMother{
public:
    CChoiceConstructor(int a) : CMother (a)
    {cout << "   + CChoiceConstructor" << endl;};
};

/**
 * Return:
         - CMother: No have parameter.
           + CNoChoiceConstructor
         + CMother: Have parameter. 0
           + CChoiceConstructor
 */
void ExampleInheritanceConstructor(void){
    CNoChoiceConstructor no(0);
    CChoiceConstructor choice(0);
}
