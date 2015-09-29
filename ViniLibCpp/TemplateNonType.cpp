// sequence template
#include <iostream>
#include "TemplateNonType.h"

using namespace std;

/**
 * Observation: [templates] can not to be declared in differents files. Example .cpp and .h.
 * Because templates are compiled when required.
 */
template <class MutantType, int pos>
class CTNonType {
    MutantType _array [pos];
public:
    void SetArray(int position, MutantType value);
    MutantType GetArray(int position);
};

template <class MutantType, int pos>
void CTNonType<MutantType, pos>::SetArray(int position, MutantType value) {
    _array[position] = value;
}

template <class MutantType, int pos>
MutantType CTNonType<MutantType, pos>::GetArray(int position) {
    return _array[position];
}

void ExampleTemplateNonType(void) {
    CTNonType <int, 5> objInt;
    objInt.SetArray(0, 100);
    cout << " = objInt = " << objInt.GetArray(0) << endl;
    
    CTNonType <double, 5> objFloat;
    objFloat.SetArray(3, 3.1416);
    cout << " = objFloat = " << objFloat.GetArray(3) << endl;
}
