#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

void subseq(string input, string output){
	if(input.length() == 0){
		cout<<output<<endl;
		return;
	}
	subseq(input.substr(1),output);
	subseq(input.substr(1),input[0]+output);
}

void subseq_2(char input_2[], char output_2[], int i){
	if(input_2[0]=='\0'){
		output_2[i] = '\0';
		cout<<output_2<<endl;
		return;
	}
	subseq_2(input_2+1,output_2,i);
	output_2[i] = input_2[0];
	subseq_2(input_2+1,output_2,i+1);
}


int main(){

	string input;
	cin>>input;

	string output = "";

	subseq(input,output);

	char input_2[10];
	char output_2[10];

	cin>>input_2;
	subseq_2(input_2,output_2,0);

	return 0;
}
