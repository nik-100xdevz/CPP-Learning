// Prodigy Student
// Write a program to input two student's names and percentages and print the name of the student with the higher percentage. In case they score equal percentages, print 'equal'.

// Input Format
// The first line of input will contain two strings: the name of the first student and the name of the second student.
// The second line of input will contain two percentages: the percentage of the first student and the percentage of the second student.
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string student1;
	string student2;
	cin >> student1 >> student2;
	int s1,s2;
	cin>>s1>>s2;
	if(s1>s2){
	    std::cout << student1 << std::endl;
	}
	else if(s2>s1){
	    cout<<student2<<endl;
	}

}
