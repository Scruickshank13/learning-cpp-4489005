// Learning C++ 
// Exercise 03_06
// Pointers, by Scott 

#include <iostream>
#include <string>
using namespace std;

int main(){
    int a = 37;
    int *ptr;

    ptr = &a;

    cout << "The content of a is " << a << endl;
    cout << "The pointer is pointing to address " << ptr << endl;
    cout << "The address of a is " << &a << endl;
    cout << "Where the pointer is pointing, we have " << *ptr << endl;
    cout << "The address of ptr is " << &ptr << endl;

    std::cout << std::endl << std::endl;
    return (0);
}
