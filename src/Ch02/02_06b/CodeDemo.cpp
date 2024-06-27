// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Scott 

#include <iostream>
#include <string>
#include <cstdint>
using namespace std;

#define CAPACITY 5000
#define DEBUG

int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;
#ifdef DEBUG
    cout << "[About to perform the addtion]" << endl;
#endif 
    large += small;

    cout << "The large integer is " << large << endl;
    return (0);
}
