/*
Print Squares
Write a program that utilizes a while loop to print the squares of numbers from 1 to 
N
N.

Check the sample input / output below further clarity.


*/
#include <iostream>
using namespace std;

int main() {
    // Write your code here
    int c;
    cin>>c;
    int i = 1;
    while(c>=i){
        std::cout << i*i << std::endl;
        
        i = i+1;
    }
    return 0;
}