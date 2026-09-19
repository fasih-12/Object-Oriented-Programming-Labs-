#include<iostream>
using namespace std;
struct student{
	string firstName;
	string lastName;
	int rollNumber;
	int marks;
	
void displayStudentInfo() {
	cout<<"First Name:"<<firstName<<endl;
	cout<<"Last Name:"<<lastName<<endl;
	cout<<"Roll Number:"<<rollNumber<<endl;
	cout<<"Marks"<<marks<<endl;
 }

};
int main(){
	student s1;
	s1.firstName= "FASIH ";
	s1.lastName="HASSAN";
	s1.rollNumber =28;
	s1.marks=88;
	s1.displayStudentInfo();
}
