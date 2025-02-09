// Positive and Negative
// Write a program to check whether the given number as input is positive, negative, or zero.
#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    if(num>0){
        std::cout << "Positve" << std::endl;
    } else if(num == 0){
        std::cout <<"Zero" << std::endl;
    } else if(num<0){
        std::cout <<"Negative"<<std::endl;
    }
    return 0;
}
