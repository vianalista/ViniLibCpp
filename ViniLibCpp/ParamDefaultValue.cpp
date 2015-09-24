// default values in functions
#include <iostream>
#include "ParamDefaultValue.h"

using namespace std;

/**
 * Example of the default value of params. int height = 0.
 * if a value is specified this default value is ignored
 */
void ExampleParamDefault(void) {
    cout << " + Test ExampleParamDefault - Default value param" << endl;

    cout << Division(20) << endl; //The second param is set as default, See declaration function in (.h) header file.)
    cout << Division(20, 4) << endl;
}

int Division(int dividend, int divisor) {
    int output;
    output = dividend / divisor;
    return output;
}
