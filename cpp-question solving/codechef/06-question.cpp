// Triangle Type
// Take the sides of a triangle as user inputs and find if the triangle is equilateral, isosceles, or scalene.

// Note:
// Equilateral Triangle: If all three sides of the triangle are equal, it is an equilateral triangle.
// Isosceles Triangle: If at least two sides of the triangle are equal, it is an isosceles triangle.
// Scalene Triangle: If all three sides of the triangle are different, it is a scalene triangle.

// Input Format
// The only line of input will contain three space separated numbers - The sides of a triangle.
// Output Format
// Output on a single line:
// Equilateral, if the triangle is equilateral.
// Isosceles, if the triangle is isosceles.
// Scalene, if the triangle is scalene.
// Constraints
// All sides are positive integers and 
// ≤
// 100
// ≤100
#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    if (s1 == s2 && s2 == s3)
        cout << "Equilateral" << endl;
    else if (s1 == s2 || s2 == s3 || s1 == s3)
        cout << "Isosceles" << endl;
    else
        cout << "Scalene" << endl;

    return 0;
}
