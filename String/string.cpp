#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){

	string s = "abc";
	
	cout<<s<<endl;
	string s2;
	s2 = "def";
	cout<<s2<<endl;

	string *sp = new string;
	*sp = "mno";
	cout<<sp<<endl;
	cout<<*sp<<endl;

	vector<string> v;
	v.push_back(s);
	v.push_back("hello");

	for (int i = 0; i < v.size(); i++){

		cout<<v[i]<<endl;
		sort(v[i].begin(),v[i].end());
		cout<<v[i]<<endl;

	}
	
	string s3;
	cin>>s3;
	cout<<s3<<endl;


	getline(cin,s3);
	cout<<s3[5]<<endl;
	s3[5]='a';

	string s4 = s + s2;
	cout<<s4<<endl;

	cout<<s4.size()<<endl;
	cout<<s4.length()<<endl;
	cout<<s4.substr(3)<<endl;//from index 3 to the end of the string. 

	cout<<s4.substr(3,6)<<endl;
	cout<<s4.find("de")<<endl;

	int a = 123;
	string s6 = to_string(a);
	cout<<s6<<endl;

	s6[1] = '4';
	cout<<s6<<endl;

	s6.push_back('5');
	a = atoi(s6.c_str());
	cout<<a<<endl;

	return 0;

}