#include<iostream>

using namespace std;

int pos_element(int a[],int n,int item){
	if(n == 0){
		if(a[n]==item){
			cout<<n<<" ";
			return 1;
		}
		return 0;
	}
	else{

		if(a[n] == item){
			cout<<n<<" ";
		}

		return pos_element(a,n-1,item);
	}
}


int main(){

	int a[6] = {5,5,5,6,5,6};
	int n = 6;

	pos_element(a,n,5);
	cout<<endl;

	return 0;
}