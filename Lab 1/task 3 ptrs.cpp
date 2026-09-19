#include<iostream>
using namespace std;
struct student{
	string firstName;
	string lastName;
	int rollNumber;
	int marks;
	void displayStudentInfo(){
	cout<<" Full Name:"<< firstName<< " "<< lastName <<endl;
	cout<<"Marks"<< marks <<" "<< endl;}
};
int main()
{ 
student s;
student *ptr;
ptr=&s;
ptr->firstName="FASIH";
ptr->lastName="UL HASSAN";
ptr->rollNumber=28;
ptr->marks=98;
ptr->displayStudentInfo();



}
