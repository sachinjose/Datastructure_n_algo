#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

void binary_search(int array[],int n, int key,int ans[]){

	int left = 0;
	int right = n-1;
	int mid = (left+right)/2;
	while(left<=right){

		mid = left + (right-left)/2;
		if(array[mid] == key){

			int i = 0;

			for (i = mid; i > 0; i--){
				if(array[i]!= key){
					break;
				}
			}

			ans[0] = i+1;

			int j = 0;

			for (j = mid; j < n; j++){
				if(array[j]!=key){
					break;
				}
			}

			ans[1] = j-1;

			return;
		}
		else if(array[mid]>key){ 
			right = mid - 1;
		}
		else {	
			left = mid + 1;
		}
	}

	return;
}

int main(){


	int flag = 0;
	int ans[2] = {-1,-1};

	int array[6] = {5,7,7,8,8,10};

	binary_search(array,6,8,ans);

	cout<<'['<<ans[0]<<","<<ans[1]<<']'<<endl;

	ans[0] = -1;
	ans[1] = -1;

	binary_search(array,6,6,ans);

	cout<<'['<<ans[0]<<","<<ans[1]<<']'<<endl;



	return 0;
}
