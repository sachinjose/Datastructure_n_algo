#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"


using namespace std;

template <typename T, typename V>

class Pair{

	T x;
	V y;

	public:

		void setX(T x){
			this->x = x;
		}

		T getX(){
			return x;
		}

		void setY(V y){
			this->y = y;
		}

		V getY(){
			return y;
		}

};

int main(){

	// Pair<int> p1;
	// p1.setX(1);
	// p1.setY(2);
	// cout<<p1.getX()<<" "<<p1.getY()<<endl;


	// Pair<double> p2;
	// p2.setX(1.34);
	// p2.setY(2.543);
	// cout<<p2.getX()<<" "<<p2.getY()<<endl;

	// Pair<int,double> p2;
	// p2.setX(23);
	// p2.setY(2.543);
	// cout<<p2.getX()<<" "<<p2.getY()<<endl;

	Pair<Pair<int,int>,int> p;
	p.setY(30);
	Pair<int,int> temp;
	temp.setX(20);
	temp.setY(30);
	p.setX(temp);

	cout<<p.getX().getX()<<" "<<p.getX().getY()<<" "<<p.getY()<<endl;


	return 0;

}