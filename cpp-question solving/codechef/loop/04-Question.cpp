// Product and Sum of digits
// Given an integer N, Calculate and print the sum and product of its digit.

// Input Format
// The first and only line of input will contain a single positive integer 
// N
// N <= 109.
// Output Format
// Print the sum and product of digits of 
// N
// N on single line with a space between them.
// Sample 1:
// Input
// Output
// 22
// 4 4
// Explanation:
// For number = 22
// sum of digits = 2 + 2 = 4
// product of digits = 2 * 2 = 4

// Sample 2:
// Input
// Output
// 222
// 6 8
// Explanation:
// For number = 222
// sum of digits = 2 + 2 + 2 = 6
// product of digits = 2 * 2 * 2 = 8

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int sum = 0;
	int product = 1;
	while(n != 0){
	    sum += (n % 10);
	    product = product * (n % 10);
	    n /= 10;
	}
	cout<< sum<< " " << product<<"\n";

}
