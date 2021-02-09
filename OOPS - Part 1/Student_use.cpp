#include<iostream>
#include"student.cpp"

// all memebers of the class are private by default 

using namespace std;

int main(){

	//creating objects statically
	Student s1;
	Student s2;
	Student s3,s4,s5;

	//creating objects dynamically

	Student *s6 = new Student;

	s1.age = 26;
	s1.rollNumber = 100;

	s1.display();
	cout<<"Age of the student is :"<<s1.getAge()<<endl;

	(*s6).age = 36;
	(*s6).rollNumber = 89;

	(*s6).display();
	(*s6).setAge(30,"123");
	cout<<"Age of the student is :"<<(*s6).getAge()<<endl;

	s6->age = 37;
	s6->rollNumber = 90;
	(*s6).display();



	return 0;
}