/*
String.h Header file for String class.

Author: Elena Mudrakova
Module: 5
Project: Lab 5

Algorithm:
1.  #ifndef STRING_H
    #define STRING_H
    #include <iostream>
    #include <string>
    #include <cstring>
2. Private members: char *string, int size.
3. Public members: 
   one arg constr String(const char * original),
   destrucutor,
   copy constructor,
   void print() function,
   void change(const char * original) function.
                    

*/
#ifndef STRING_H
#define STRING_H
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class String{
    private:
        char *string; 
        int size;
    public:
        
        String(const char * original);
        ~String(){
            delete [] string;
            
        };
        // Copy constr
        String(const String &original);
        void print();
        void change(const char * original);


};

#endif
