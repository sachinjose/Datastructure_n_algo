#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"
#include<unordered_map>
// #include<string>

using namespace std;

// Map (its ordered) function utilises BST and performs functions in logn time 
// the unordered map uses a hash table and performs at constant time 

int main(){

	unordered_map<string,int> mymap; // <key,value> string is key and int is value

	//method 1 to insert
	pair<string,int>p("abc",1);
	mymap.insert(p);

	//method 2 to insert

	mymap["Def"] = 2;

	//find or access

	cout<<mymap["abc"]<<endl;
	cout<<mymap.at("abc")<<endl;

	cout<<mymap["ghi"]<<endl;//adds it to the has map
	// cout<<mymap.at("ghif")<<endl; //returns exception

	//checkpresence of a key

	mymap.erase("ghi");

	if(mymap.count("ghgi")>0){
		cout<<"GHI is present"<<endl;
	}
	else{
		cout<<"Not Present"<<endl;
	}

	//update
	mymap["abc"] = 20;

	cout<<"Size "<<mymap.size()<<endl;

	return 0;
}