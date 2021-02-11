#include<iostream>
#include<cstring>

using namespace std;

class Student{
	
	int age;
	char *name;

public:

	Student(int age, char *name, int flag){

		if(flag == 1){ //shallow copy
			this->age = age;
			this->name = name;

		}

		else{ //deep copy
			this->age = age;
			this->name = new char[strlen(name)+1];
			strcpy(this->name,name);
		}
	}


	void display(){
		cout<<name<<" "<<age<<endl;
	}

};

int main(){
	 
	 char name[] = "abcd";
	 Student *s1 = new Student(20,name,1);

	 cout<<"Shallow Copy"<<endl; //copy only address of the 0th index //send 1 as flag variable 
	 s1->display();

	 name[3] = 'e';
	 Student s2(30,name,1);
	 s2.display();
	 s1->display();

	 name[3] = 'd';
	 cout<<"Deep Copy"<<endl; //copy the entire object. 

	 Student *s3 = new Student(20,name,2);
	 s3->display();
	 name[3] = 'e';
	 Student s4(30,name,1);
	 s4.display();
	 s3->display();

	 return 0;
}