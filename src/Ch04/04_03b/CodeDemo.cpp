// Learning C++ 
// Exercise 04_03
// While Loops, by Scott 

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> numbers = {12, 25, 31, 47, 58};
    
    auto ptr = numbers.begin();

    while (ptr != numbers.end()){
        cout << *ptr << " ";
        ptr = next(ptr, 1);
    }
    cout << endl;



    cout << endl << endl;
    return (0);
}
