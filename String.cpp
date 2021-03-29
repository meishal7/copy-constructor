/*
String.cpp Implementation of String class.

Author: Elena Mudrakova
Module: 5
Project: Lab 5

Algorithm:
1.  #include "String.h"
    #include <iostream>
    #include <string>
    #include <cstring>
2. Declare one arg constructor String(const String &original) and initialize members to:
    size = strlen(original);
    string = new char[size + 1];
    strcpy(string, original);
3. Define copy constructor.
4. Define print() function that prints string to console.
5. Define void change(const char * original) function that:
   deletes allocated string,
   size = strlen(original);
   string = new char[size + 1];
   strcpy(string, original);


*/

#include "String.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

        String::String(const char * original){
            size = strlen(original);
            string = new char[size + 1];
            strcpy(string, original);
        }
        
        // Copy constr
        String::String(const String &original){
            size = original.size;
            string = new char[size + 1];
            strcpy(string, original.string);

        }
        void String::print(){
            cout << string << endl;
        };
        void String::change(const char * original){
            delete [] string;

            size = strlen(original);
            string = new char[size + 1];
            strcpy(string, original);

        };






