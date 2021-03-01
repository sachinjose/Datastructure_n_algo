#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

int rot_array_search(vector<int> a, int key){

	int s = 0;
	int e = a.size() - 1;


	while(s<=e){

			int mid = (s + e)/2;
			if(a[mid] == key ){
				return mid;
			}

			if(a[s] <= a[mid]){

				if(key >= a[s] && key <= a[mid]){
					e = mid - 1;
				}
				else{
					s = mid + 1; 
				}

			}

			else{

				if (key >=a[mid] && key <= a[mid]){
					s = mid +1;
				}
				else{
					e = mid - 1;
				}

			}


		}

		return -1;	
	}


int main(){

	vector<int> nums;

	nums.push_back(4);
	nums.push_back(5);
	nums.push_back(6);
	nums.push_back(7);
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(2);


	cout<<rot_array_search(nums,5)<<endl;


	return 1;
}