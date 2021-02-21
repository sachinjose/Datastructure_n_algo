#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

bool checkpalindrome(int array[],int start,int end){
	if(start > end){
		return true;
	}
	if(array[start] == array[end]){
		return checkpalindrome(array,start+1,end-1);
	}
	else{
		return false;
	}
}


int main(){

	int a[6]={5,5,6,5,6,7};
	//int a[6]={1,2,3,3,2,1};
	cout<<checkpalindrome(a,0,5)<<endl;

	return 0;
}