#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;


void subseq_2(char input_2[], char output_2[], int i, vector<string> &v){
	if(input_2[0]=='\0'){
		output_2[i] = '\0';
		string s = output_2; 
    	v.push_back(s);
		return;
	}
	subseq_2(input_2+1,output_2,i,v);
	output_2[i] = input_2[0];
	subseq_2(input_2+1,output_2,i+1,v);
}


int main(){

	vector<string> v;

	char input_2[10];
	char output_2[10];

	cin>>input_2;
	subseq_2(input_2,output_2,0,v);

	cout<<v.size()<<endl;


	for (int i = 0; i < v.size(); i++){
		cout<<v.at(i)<<endl;
	}

	return 0;
}
