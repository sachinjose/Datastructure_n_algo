#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

void remove_sup(char strin_g[]){

	if(strin_g[0] == '\0'){
		return;
	}
	
	if(strin_g[0] == strin_g[1]){
		for (int i = 1; strin_g[i] != '\0' ; i++){
			strin_g[i] = strin_g[i+1];
		}
	}

	if(strin_g[0] == strin_g[1]){
		remove_sup(strin_g);
	}
	remove_sup(strin_g+1);
}

int main(){

	char strin_g[] = "aabbbcdda";

	cout<<strin_g<<endl;

	remove_sup(strin_g);

	cout<<strin_g<<endl;

	return 0;
}
