#include<iostream>
#include"dynamic_array.cpp"

using namespace std;


int main(){

	DynamicArray d1;

	d1.getCapacity();
	d1.add(1);
	d1.add(2);
	d1.add(3);
	d1.add(4);
	d1.add(5);
	d1.add(6);
	d1.add(7);
	d1.add(8);
	d1.add(9);
	d1.getCapacity();
	d1.add(10);

	d1.print();



	return 0;
}