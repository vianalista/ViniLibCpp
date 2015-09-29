#include <iostream>
#include "TemplateFunction.h"

using namespace std;

template <class ViniType>

ViniType BiggerThan(ViniType num1, ViniType num2) {
    ViniType output = 0;

    output = (num1 > num2) ? num1 : num2;
    return output;
}

void ExampleTemplate(void) {
    {
        int a = 3, b = 5, c;
        c = BiggerThan<int>(a, b);
        cout << " = c = " << c << endl;
    }
    
    // Test change type int to long.
    {
        long a = 3, b = 5, c;
        c = BiggerThan<long>(a, b);
        cout << " = c = " << c << endl;
    }
}