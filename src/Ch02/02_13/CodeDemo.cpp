// Learning C++ 
// Challenge 02_13
// Calculate an Average, by Scott 

#include <iostream>
using namespace std;

int main(){
   float nums[5] = {1, 34, 54.5, 45, 6};
   float result = 0.0;


for (int i = 0; i < 5; i++){
    result += nums[i];
}
    result /=5;

    std::cout << "The average is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
