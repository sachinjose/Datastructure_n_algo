#include<iostream>
#include<cstring>

using namespace std;

class Student{
	
	static int totalStudents; //total number of students present

	public:
		int age;
		int rollnumber;

		Student(){
			totalStudents++;
		}

		Student(int age,int rollnumber){
			this->age = age;
			this->rollnumber = rollnumber;
		}

		void display(){
			cout<<rollnumber<<" "<<age<<endl;
		}
		static int getTotalStudents(){
			return totalStudents;
		}

		Student operator+(Student const &s2){

			int new_age = age + s2.age;
			int new_rollnumber = rollnumber + s2.rollnumber;
			Student snew(new_age,new_rollnumber);

			return snew;
		}

		//preincrement++a
		Student& operator++(){
			age = age + 1;
			rollnumber = rollnumber + 1;
			return *this;
		}

		//postincrementoperatora++
		Student& operator++(int){
			age = age + 1;
			rollnumber = rollnumber + 1;
			return *this;
		}

};

int Student::totalStudents = 0;//init

int main(){
	 
	 Student s1(5,2);
	 Student s2(6,3);
	 Student s3 = s1+s2;

	 s3.display();
	 s3++;

	 (s3++)++
	 s3.display();


	 return 0;
}















