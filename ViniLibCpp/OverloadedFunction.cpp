/* 
 * File:   main.cpp
 * Author: vinicius
 *
 * Created on 23 de Setembro de 2015.
 */
#include <iostream>
#include "OverloadedFunction.h"
using namespace std;

void ExampleOverloadedFunction(void)
{
    cout << "1. Example Overloaded Function. \n";
    int numIntA = 5, numIntB = 2;
    float NumFloatA = 5.0, numFloatB = 2.0;
    
    cout << Overload(numIntA, numIntB) << "\n";
    cout << Overload(NumFloatA, numFloatB) << "\n";
}

int Overload(int a, int b) {
    cout << " + Overloaded int. \n";
    return (a * b);
}

float Overload(float a, float b) {
    cout << " + Overloaded float. \n";
    return (a * b);
}


