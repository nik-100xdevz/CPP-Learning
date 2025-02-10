// Grades of Student
// Write a program to print the grades of a student based on the marks they have obtained provided as input. The student is graded A if marks are greater than 90, B if marks are greater than 70, C if greater than or equal to 40, else F.
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int grade;
	cin>>grade;
	if(grade >= 40 && grade<70){
	    cout<<"C"<<endl;
	}else if(grade>=70 && grade < 90) {
	    cout<<"B"<<endl;
	} else if(grade>90){
	    std::cout << "A" << std::endl;
	} else{
	    cout<<"F"<<endl;
	}
}
