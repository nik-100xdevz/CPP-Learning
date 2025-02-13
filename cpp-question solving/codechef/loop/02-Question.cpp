/*
Print factorial
Write a program that uses a do-while loop to find the factorial of a given number.*/
#include <iostream>
using namespace std;

int main() {
    int num, factorial = 1, i = 1;
    cin >> num;
    do {
        factorial *= i;
        i++;
    } while (i <= num);
    cout << factorial << endl;

    return 0;
}
