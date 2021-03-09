#include<iostream>
#include<vector>

using namespace std;


int main(){

	vector<int> v(5,-2);	//static vector implementation a vector of size 5 initialised with -2 value is created here
	vector<int> *vp = new vector<int>; //dynamic we will have to delete it ourselves


	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	v[1] = 100;

	//never use [] to insert into a vector as the size of the array will not increase 
	// cout<<v[0]<<endl;
	// cout<<v[1]<<endl;
	// cout<<v[2]<<endl;

	v[3] = 123;
	v[4] = 23;

	v.push_back(40);
	v.push_back(50);
	v.push_back(60);

	sort(v.begin(),v.end());

	// cout<<v[0]<<endl;
	// cout<<v[1]<<endl;
	// cout<<v[2]<<endl;
	// cout<<v[3]<<endl;
	// cout<<v[4]<<endl;
	// cout<<v[5]<<endl;
	// cout<<v[6]<<endl;
	// cout<<v[7]<<endl;
	// cout<<v[8]<<endl;

	v.pop_back();

	//at is much more safer as it wont acceses junk value and all the values will be in the array

	for (int i = 0; i < v.size(); i++){
		cout<<v.at(i)<<endl;
	}

	cout<<v.capacity()<<endl;

	return 0;

}