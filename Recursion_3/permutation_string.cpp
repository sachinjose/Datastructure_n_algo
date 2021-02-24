#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

void permutation(char input[], int i=0){

	if(input[i] == '\0'){
		cout<<input<<endl;
		return;
	}

	for(int j = i; input[j]!= '\0'; j++){
		swap(input[i],input[j]);
		permutation(input,i+1);
		swap(input[i],input[j]);
	}

}



int main(){

	char input[10];

	cin>>input;

	char output[10];

	permutation(input);

	cout<<endl;

	return 0;
}
