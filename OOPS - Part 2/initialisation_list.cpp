#include<iostream>
#include<cstring>

using namespace std;

class Student{

	public:

		int age;
		const int rollNumber;
		int &x; //age reference variables

		//initialisatin list initiliases constant properties and reference properties at the time of memory allocation. 
		//reference variables should be initialised at the tiem of creation. 

		Student(int r, int age) : rollNumber(r),age(age),x(this->age){
			//rollnumber = r
		}


};

int main(){
	 
	Student s1(100,10);
	s1.age = 10;


	 return 0;
}


