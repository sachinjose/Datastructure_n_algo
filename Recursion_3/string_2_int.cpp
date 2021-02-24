#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

int string2int(char input[],int output){
	if(input[0] == '\0'){
		output = output/10;
		return output;
	}

	output += input[0] - '0';
	output *= 10;
	return string2int(input+1,output);
}


int main(){

	char input[10];
	cin>>input;

	int output = 0;
	output = string2int(input,output);

	cout<<output<<endl;

	return 0;
}
