#include<iostream>
#include "student.cpp"

using namespace std;


int main(){

	Student s1;
	s1.display();
	Student s2;
	s2.display();
	Student *s3 = new Student;
	s3->display();

	cout<<"Parametrized Constructor Demo"<<endl;
	Student s4(10);
	s4.display();

	Student *s5 = new Student;
	s5->display();

	Student s6(100,200);
	s6.display();

	Student s7(9,100);
	s7.display();

	Student s8(s7);
	s8.display();

	Student *s9 = new Student(*s3);
	s9->display();

	return 0;
}