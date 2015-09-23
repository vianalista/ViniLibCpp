#include <iostream>
#include "RecursiveFunction.h"

using namespace std;

void ExampleRecursiveFunction() {
    long number;
    
    cout << "Please type a number: ";
    cin >> number;
    cout << number << "! = " << GetFactorial(number) << endl;
}

long GetFactorial(long number) {
    cout << ".";
    if (number > 1)
        return (number * GetFactorial(number - 1));
    else
        return (1);
}

