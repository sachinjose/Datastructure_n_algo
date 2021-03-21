#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"
#include<unordered_map>

using namespace std;

vector<int> removeDuplicates(vector<int> arr){

	unordered_map<int,int> mymap;
	vector<int> output;

	for (int i = 0; i < arr.size(); ++i){		
		if(mymap.count(arr.at(i)) == 0){
			mymap[arr.at(i)] = 1;
			output.push_back(arr.at(i));
		}
	}

	return output;
}

void printVector(vector<int> v){
	for (int i = 0; i < v.size(); i++){
		cout<<v.at(i)<<" ";
	}
	cout<<endl;
}

int main(){

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);
	v.push_back(4);
	v.push_back(4);	
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	v.push_back(9);

	printVector(v);

	v = removeDuplicates(v);

	printVector(v);
}