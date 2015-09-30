#include <iostream>
#include "TypeCasting.h"

using namespace std;

void ExampleTypeCasting(void){
    TypeCastingClass();
    cout << "-------------------\n";
    DynamicCast();
}


void TypeCastingClass(void){
    class A{};
    class B { public: B (A a) {} };
    
    A a;
    B b = a;   
    cout << " [Cast] 1. Cast of class ok." << endl;
}
/**
 * ** Types of cast:
 * dynamic_cast <new_type> (expression)
 * reinterpret_cast <new_type> (expression)
 * static_cast <new_type> (expression)
 * const_cast <new_type> (expression)
 */
void DynamicCast(void){
    class CBase { virtual void dummy() {} };
    class CDerived: public CBase { int a; };

    try {
        CBase * pba = new CDerived;
        CBase * pbb = new CBase;
        CDerived * pd;
        
        pd = dynamic_cast<CDerived*> (pba);
        if (pd == 0) cout << "Null pointer on first type-cast" << endl;
        
        pd = dynamic_cast<CDerived*> (pbb);
        if (pd == 0) cout << "Null pointer on second type-cast" << endl;
        
    } catch (exception& e) {
        cout << "Exception: " << e.what();
    }
    cout << " [Cast] 2. Error because pbb is instance of CBase (new CBase), but CBase dont support the CDerived method." << endl;
}
