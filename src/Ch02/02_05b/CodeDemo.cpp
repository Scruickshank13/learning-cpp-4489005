// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Scott 

#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    auto a = 8;
    auto b = 12346464621231131;
    auto c = 3.14f;
    auto d = 3.14;
    auto e = true;
    auto f = 'd';
    auto g = "C++ Rocks";
    
    cout << "The type of a is " << typeid(a).name() << endl;
    cout << "The type of a is " << typeid(b).name() << endl;
    cout << "The type of a is " << typeid(c).name() << endl;
    cout << "The type of a is " << typeid(d).name() << endl;
    cout << "The type of a is " << typeid(e).name() << endl;
    cout << "The type of a is " << typeid(f).name() << endl;
    cout << "The type of a is " << typeid(g).name() << endl;
    

    std::cout << std::endl << std::endl;
    return (0);
}
