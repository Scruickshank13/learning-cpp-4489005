// Learning C++ 
// Exercise 02_09
// Strings, by Scott 

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
   const size_t LENGTH1 = 25;

   char array_str1[LENGTH1] = "Hey guys! ";
   char array_str2[] = "What's up?";

   string std_str1 = "Hi Hi ";
   string std_str2 = "How are you?";

   strncat(array_str1, array_str2, LENGTH1);
   cout << array_str1 << endl;
   cout << std_str1 + std_str2 << endl;

    std::cout << std::endl << std::endl;
    return (0);
}
