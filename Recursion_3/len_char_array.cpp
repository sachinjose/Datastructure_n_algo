#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

int length_str(char strin_g[]){
	if(strin_g[0]=='\0'){
		return 0;
	}

	return 1 + length_str(strin_g+1);
}

int main(){

	char strin_g[] = "hello";

	cout<<length_str(strin_g)<<endl; 

	return 0;
}