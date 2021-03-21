#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"
#include<unordered_map>

using namespace std;

int main(){

	unordered_map<string,int> mymap;

	mymap["ab"] = 1;
	mymap["abc"] = 2;
	mymap["abcd"] = 3;
	mymap["abc2"] = 4;
	mymap["abc3"] = 5;
	mymap["abc4"] = 6;
	mymap["abc5"] = 7;
	mymap["abc6"] = 8;
	mymap["abc7"] = 9;
	mymap["abc8"] = 10;


	for(auto it = mymap.begin(); it != mymap.end(); it++){
		cout<<"Key: "<<it->first<<" "<<"Value : "<<it->second<<endl;
	}

	cout<<"Map2"<<endl;

	//map is ordered on the basis of keys and not on the basis of values

	map<string,int> mymap2;

	mymap2["ab"] = 1;
	mymap2["abc"] = 2;
	mymap2["abcd"] = 3;
	mymap2["abc2"] = 4;
	mymap2["abc3"] = 5;
	mymap2["abc4"] = 6;
	mymap2["abc5"] = 7;
	mymap2["abc6"] = 8;
	mymap2["abc7"] = 9;
	mymap2["abc8"] = 10;

	for(map<string,int>::iterator it = mymap2.begin(); it != mymap2.end(); it++){
		cout<<"Key: "<<it->first<<" "<<"Value : "<<it->second<<endl;
	}

	//vector
	vector<int> v;

	v.push_back(8);
	v.push_back(9);
	v.push_back(10);
	v.push_back(11);
	v.push_back(12);
	v.push_back(13);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);


	for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
		cout<<*it<<" ";
	}

	cout<<endl;

	unordered_map<string,int>::iterator it  = mymap.find("abc");
	mymap.erase(it);

	cout<<mymap.size()<<endl;

	mymap.erase(mymap.begin(),mymap.end());

	if(mymap.find("abc") == mymap.end()){
		cout<<"Not Found";
	}
	else{
		cout<<"Found";
	}

	cout<<endl;

	cout<<mymap.size()<<endl;

	return 0;




}