#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

bool isValid(string A){

	stack<char> s;

	for (int i = 0; i < A.size(); i++){

		if(A[i] == '(' || A[i]=='{' || A[i]=='['){
			s.push(A[i]);
		}
		else{
			if(s.empty()){
				return false;
			}
			else if(A[i] == ')'){
				if(s.top() == '('){
					s.pop();
				}
				else{
					return false;
				}

			}
			else if(A[i] == '}'){
				if(s.top() == '{'){
					s.pop();
				}
				else{
					return false;
				}
			}
			else if(A[i] == '['){
				if(s.top() == ']'){
					s.pop();
				}
				else{
					return false;
				}
			}
		}
	}
	
	if(s.empty()){
		return true;
	}
	else{
		return false;
	}
}

int main(){

	string s = "[[]]";
	cout<<isValid(s)<<endl;


	return 0;
}