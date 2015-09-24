#include <iostream>
#include "PointerToClasses.h"

using namespace std;

void CStorage::Set(int newValue) {
    value = newValue;
}

int CStorage::Get(void) {
    return value;
}

void ExamplePointerToClasses(void) {
    CStorage objStatic;

    objStatic.Set(1);
    cout << " + objStatic.Get() = " << objStatic.Get() << endl;

    CStorage *pObject = new CStorage[2];
       
    pObject->Set(2);
    cout << " + pObject[0].Get() = " << pObject[0].Get() << endl;

    pObject[1].Set(3);
    cout << " + pObject[0].Get() = " << pObject[0].Get() << endl;
    cout << " + pObject[1].Get() = " << pObject[1].Get() << endl;
}
