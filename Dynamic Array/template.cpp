#include<iostream>
#include"dynamic_array.cpp"

using namespace std;

template <typename T>

class Pair{

	T x;
	T y;

	public:

		void setX(T x){
			this->x = x;
		}

		T getX(){
			return x;
		}

		void setY(T y){
			this->y = y;
		}

		T getY(){
			return Y;
		}

};

int main(){

	Pair<int> p1;
	p1.setX(1);
	p1.setY(2);
	cout<<p1.getX()<<" "<<p1.getY()<<endl;


	Pair<double> p2;
	p2.setX(1.34);
	p2.setY(2.543);
	cout<<p1.getX()<<" "<<p1.getY()<<endl;


	return 0;

}