#include <iostream>
#include "LineControlForEasyDebug.h"

using namespace std;

/**
 * Show one mensage before the error for find the error.
 */
void LineControlForEasyDebug(void){
    #line 10 " <><> ====> Debug 1."  // This line will not be displayed
    int num1;
    #line 12 " <><> ====> Debug 2."
    int num2?;              // This line will be displayed: compile error mensage.
}
