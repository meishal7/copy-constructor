/*
main.cpp This program demonstrates using of copy constructor. 

Author: Elena Mudrakova
Module: 5
Project: Lab 5

Algorithm:
Before main()
1.  #include "String.h"
    #include <iostream>
    #include <string>
    #include <cstring>
In main()
1. Comment copy constructor for now.
2. Create new str1 object of String class.
3. Create new str2 object of String class and assign str1 to str2.
4. Print both objects to concole.
5. Change str2 object using change().
6. Print both objects to concole.
7. Change str1 object using change().
8. Print both objects to concole and observe the problem because without copy constr pointer points to the 
deallocated object.
9. Uncomment copy constr.
10. Print both objects to console. Now the program doesn't have a problem because we use copy constructor.

*/
#include "String.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    cout << "Initial strings:" << endl;
    String str1("MiraCosta College");
    String str2 = str1;

    str1.print();
    str2.print();

    cout << "\nAfter changing str2: " << endl;
    str2.change("MiraMar College");

    str1.print();
    str2.print();

    cout << "\nAfter changing str1 (with copy constructor): " << endl;
    str1.change("San Diego");
    
    str1.print();
    str2.print();






}