#include <iostream>
#include <fstream>
#include "FileStream.h"

using namespace std;

void ExampleFileStream(void){
    TextFile();
    cout << "---------------" << endl;
    Binaryfile();
}

void TextFile(void){
    cout << "-------TextFile--------" << endl;
    ofstream pointerToFile("Example.txt");
    
    if(pointerToFile.is_open()){
        pointerToFile << "This is a line 1. \n";
        pointerToFile << "This is a line 2. \n";
        
        pointerToFile.close();
    }
    else
        cout << " - Open file erro." << endl;
}

/**
 * ios::in - Open for input operations.
 * ios::out - Open for output operations.
 * ios::binary - Open in binary mode.
 * ios::ate - Set the initial position at the end of the file.
 * ios::app - All output operations are performed at the end of the file, appending the content to the current content
 * of the file. This flag can only be used in streams open for output-only operations.
 * ios::trunc - If the file opened for output operations already existed before, its previous content is deleted and
 * replaced by the new one.
 */
void Binaryfile(void){
    cout << "-------Binaryfile--------" << endl;
    ifstream file("Example.txt", ios::in | ios::binary | ios::ate);
    ifstream::pos_type size;
    char *buf;
    
    if(file.is_open()){
        size = file.tellg();
        buf = new char [size];
        file.seekg(0, ios::beg);
        file.read(buf, size);
        file.close();
        
        if (size)
            cout << buf << endl;
        delete [] buf;
    }
    else
        cout << " - Erro to open file." << endl;
}
