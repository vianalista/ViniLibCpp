#include <iostream>
#include "StandardMacroNames.h"

using namespace std;

void StandardMacroNames(void) {
    cout << "Compilation " << __DATE__;;
    cout << " : " << __TIME__ << ".\n";
    
    cout << "Made in " << __FILE__  << " - Line: " <<  __LINE__ ;
   
    cout << "The compiler gives a __cplusplus value of ";
    cout << __cplusplus;
}
