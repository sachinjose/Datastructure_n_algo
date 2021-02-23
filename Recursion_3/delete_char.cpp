#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

void delete_char(char strin_g[]){

	if(strin_g[0] == '\0'){
		return;
	}
	if(strin_g[0] == 'a'){
		for (int i = 0; strin_g[i] != '\0' ; i++){
			strin_g[i] = strin_g[i+1];
		}
	}
	if(strin_g[0] == 'a'){
		delete_char(strin_g);	
	}
	delete_char(strin_g+1);
	
}

int main(){

	char strin_g[] = "aabcdafgab";

	cout<<strin_g<<endl;

	delete_char(strin_g);

	cout<<strin_g<<endl;

	return 0;
}