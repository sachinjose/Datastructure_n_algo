#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

void replace_char(char strin_g[],char ele,char rep){
	if(strin_g[0] == '\0'){
		return;
	}
	if(strin_g[0] == ele){
		strin_g[0] = rep;
	}
	replace_char(strin_g+1,ele,rep);
}

int main(){

	char strin_g[] = "hello";

	replace_char(strin_g,'l','x');
	replace_char(strin_g,'o','x');
	replace_char(strin_g,'h','x');
	replace_char(strin_g,'e','x');

	cout<<strin_g<<endl;

	return 0;
}