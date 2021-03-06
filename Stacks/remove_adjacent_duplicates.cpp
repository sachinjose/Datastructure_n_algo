#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

vector<char> remove_adjacent_duplicates(vector<char> &s){

	vector<char> temp;
	temp.push_back(s[0]);

	for (int i = 0; i < s.size(); i++){
		
		char top_element = s.at(i);
		if(temp[temp.size()-1]!=top_element){
			temp.push_back(top_element);
		}

	}

	return temp;
}


int main(){

	vector<char> s;
	s.push_back('m');
	s.push_back('i');
	s.push_back('s');
	s.push_back('s');
	s.push_back('i');
	s.push_back('p');
	s.push_back('p');
	s.push_back('i');

	vector<char> v = remove_adjacent_duplicates(s);

	for (int i = 0; i < v.size(); i++){
		cout<<v.at(i);
	}

	cout<<endl;

	return 0;
}