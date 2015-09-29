#include <iostream>
#include "TemplateSpecialization.h"

using namespace std;

/** Default key words for template
 * template <class identifier> function_declaration;
 * template <typename identifier> function_declaration;
 */

//class template
template <class MutantType>
class CContainer{
    MutantType _character;
    public:
        CContainer(MutantType arg) {_character = arg;}
        MutantType Increase() {return ++_character;}
};

//Class template specialization: this example specialization on type char.
template <>
class CContainer<char>{
    char _character;
    public:
        CContainer(char arg) {_character = arg;}
        char UpperCase(){
            if((_character >= 'a') && (_character <= 'z')){
                _character += 'A' - 'a';
                return _character;
            }
            else
                return ' ';
        }
};

void ExampleTemplateSpecialization(void){
    CContainer<int> objInt(5);
    cout << " = objInt  [5] = " << objInt.Increase() << endl;
    
    CContainer<char> objCharA('a');
    cout << " = objChar [a] = " << objCharA.UpperCase() << endl;
    
    CContainer<char> objCharB('b');
    cout << " = objChar [b] = " << objCharB.UpperCase() << endl;
    
    CContainer<char> objCharC('1');
    cout << " = objChar [1] = " << objCharC.UpperCase() << endl;
}
