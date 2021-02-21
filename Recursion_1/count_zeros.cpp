#include<iostream>

using namespace std;


int count_zero(int n){
	if(n == 0){
		return 0;
	}
	else{

		if(n%10 == 0){
			return 1 + count_zero(n/10);		
		}
		else{
			return count_zero(n/10);
		}

	}
}

int main(){
	int n;
	cin>>n;
	cout<<count_zero(n)<<endl;
	return 0;
}