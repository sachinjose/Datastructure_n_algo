//appears n/2 times
#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

int majorityElement(vector<int> a){
	int cand = a[0];
	int count = 1;

	for (int i = 0; i < a.size(); ++i){
			
		if(a[i]!=cand){
			count--;
			if(count == 0){
				cand = a[i];
				count = 1;
			}
		}

		if(a[i] == cand ){
			count++;
		}

	}
	return cand;
}

int main(){

	vector<int> nums;

	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(3);

	cout<<majorityElement(nums)<<endl;

	return 1; 
}