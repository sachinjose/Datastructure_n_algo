#include<iostream>
using namespace std;

class Student{

private: 
	int aadhar;

public:
	//default constructor
	Student(){
		cout<<"Constructor Called"<<endl;
	}
	//parameterised constructor
	Student(int rollNumber){
		cout<<"Constructor 2 is called "<<endl;
		this->rollNumber = rollNumber;
	}

	//parameterized constructor 2

	Student(int rollNumber, int age){
		cout<<"Constructor 3 is called "<<endl;
		this->rollNumber = rollNumber;
		this->age = age;
	}

	~Student(){
		cout<<"Destructor Initiated"<<endl;
	}

	int rollNumber;
	int age;
	void display(){
		cout<<age<<" "<<rollNumber<<endl;
	}
	int getAge(){
		return age;
	}
	void setAge(int a, string password){
	if(password!="123"){
		return;
	}
		if(a<0){
			return;
		}
		age = a;
	}


};

//all memebers of the class are private by default 
//



// int main(){

// 	//creating objects statically
// 	Student s1;
// 	Student s2;
// 	Student s3,s4,s5;

// 	//creating objects dynamically

// 	Student *s6 = new Student;

// 	s1.age = 26;
// 	s1.rollNumber = 100;

// 	cout<<s1.age<<endl;
// 	cout<<s1.rollNumber<<endl;

// 	(*s6).age = 36;
// 	(*s6).rollNumber = 89;

// 	s6->age = 37;
// 	s6->rollNumber = 90;

// 	cout<<(*s6).age<<endl;
// 	cout<<(*s6).rollNumber<<endl;



// 	return 0;
// }

