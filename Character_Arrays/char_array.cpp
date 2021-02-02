#include<iostream>

using namespace std;

int leng(char name[]){
	for(int i=0; i<100; i++){
		if (name[i] =='\0'){
			return i;
		}
	}
	return 0;
}

// cin.getline(variable,length,delimiter)
//cin.getline('helloworld',100,'o') ==> hell

void reverse(char name[]){
	char start = 0;
	char end = leng(name)-1;
	while(start<=end){
		swap(name[start],name[end]);
		start++;
		end--;
	}
}

bool mystrcmp(char a[], char b[]){
	if(strlen(a)!=strlen(b)){
		return false;
	}
	else{
		for(int i=0; i<strlen(a); i++){
			if(a[i]!=b[i]){
				return false;
			}
		}
		return true;
	}
}

int main(){

	char name[100];
	char a[100],b[100];
	cout<<"Enter your name :";
	cin>>name;
	cout<<"Your first name is "<<name<<endl;
	cout<<"Your name is "<<leng(name)<<" letters long"<<endl;

	cout<<"Enter the full name :"<<endl;
	cin.getline(name,100);
	cout<<"Your full name is: "<<name<<endl;\

	reverse(name);
	cout<<"Your name reversed is: "<<name<<endl;

	// //inbuilt functions
	cout<<"Length of a name: "<<strlen(input)<<endl;

	cout<<"Enter two strings "<<endl;
	cin>>a;
	if(strcmp(a,b) == 0){
	 	cout<<"Both strings are equal"<<endl;
	 }
	 else{
	 	cout<<"The strings are unequal"<<endl;
	 }


	strcpy(b,a); //strcpy(destn_string,source_string);
	cout<<b<<endl;


	cin>>a>>b;
	strncpy(b,a,3);
	cout<<a<<b;


	strcat(b,a);
	cout<<a<<" "<<b;
	return 0;
}