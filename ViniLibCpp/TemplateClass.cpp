#include <iostream>
#include "TemplateClass.h"

using namespace std;

template <class MutantType>
class CTemplate {
    MutantType _num1, _num2;
public:

    CTemplate(MutantType num1, MutantType num2) {
        _num1 = num1;
        _num2 = num2;
    }
    MutantType BiggerThan();
};

template<class MutantType>
MutantType CTemplate<MutantType>::BiggerThan() {
    MutantType output = 0;
    output = (_num1 > _num2) ? _num1 : _num2;
    return output;
}

void ExampleTemplateClass(void) {
    {
        CTemplate<int> object(3, 5);
        cout << " = c = " << object.BiggerThan() << endl;
    }

    // Teste change the Type int to long. See the file TemplateFunctio.cpp for more details.
    {
        CTemplate<long> object(3, 5);
        cout << " = BiggerThan = " << object.BiggerThan() << endl;
    }
}
