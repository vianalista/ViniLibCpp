// default values in functions
#include <iostream>

using namespace std;

int divide(int a, int b = 2) {
    int r;
    r = a / b;
    return (r);
}

/**
 * Example of the default value of params. int height = 0.
 * if a value is specified this default value is ignored
 */
void ExampleParamDefault(void) {
    cout << " + Test ExampleParamDefault - Default value param" << endl;

    cout << divide(20) << endl;
    cout << divide(20, 4) << endl;
}
