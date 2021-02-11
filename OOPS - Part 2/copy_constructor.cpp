#include<iostream>
#include<cstring>

using namespace std;

class Student{
	
	int age;


	public:
		char *name;
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
		Student(Student const &s, int flag){
			if (flag == 1){
				this->age = s.age;
				this->name = s.name;
			}
			else{
				this->age = s.age;
				this->name = new char[strlen(s.name)+1];
				strcpy(this->name,s.name);
			}
		}

		void display(){
			cout<<name<<" "<<age<<endl;
		}

};

int main(){
	 
	 char name[] = "abcd";
	 Student s1 (20,name,1);
	 cout<<"Shallow Copy"<<endl;	 
	 s1.display();
	 Student s2 (s1,1); //shallow copy is performed by the inbuilt copy constructor 
	 s2.name[0] = 'x';
	 s1.display();
	 s2.display();

	 cout<<"Deep Copy"<<endl;
	 s1.display();
	 Student s3 (s1,2);
	 s3.name[1] = 'd';
	 s1.display();
	 s3.display();


	 return 0;
}