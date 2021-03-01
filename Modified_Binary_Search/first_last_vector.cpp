#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;

int getFirst(vector<int> &nums, int target){

	int s = 0;
	int e = nums.size() - 1;
	int ans = -1;

	while(s<=e){

		int mid = (s + e)/2;

		if(nums[mid] == target){
			ans = mid;
			e = mid - 1;
		}

		else if(nums[mid] < target){
			s = mid + 1;
		}

		else{
			e = mid - 1;
		}

	}

	return ans;

}
 
int getLast(vector<int> &nums, int target){

	int s = 0;
	int e = nums.size() - 1;
	int ans = -1;
	
	while(s<=e){

		int mid = (s+e)/2;

		if(nums[mid] == target){
			ans = mid;
			s = mid + 1;
		}

		else if(nums[mid] < target){
			s = mid + 1;
		}

		else{
			e = mid - 1;
		}

	}

	return ans;
}

void searchRange(vector<int> &nums, int target, vector<int> &ans){

	int first = getFirst(nums,target);

	cout<<first<<endl;

	if(first == -1){
		return ;
	}
	int last = getLast(nums,target);

	ans[0] = first;
	ans[1] = last;

	return; 
}

int main(){

	vector<int> nums;

	nums.push_back(5);
	nums.push_back(7);
	nums.push_back(7);
	nums.push_back(8);
	nums.push_back(8);
	nums.push_back(10);

	vector<int> ans;

	ans.push_back(-1);
	ans.push_back(-1);

	searchRange(nums,8,ans);

	cout<<'['<<ans[0]<<","<<ans[1]<<']'<<endl;

	ans[0] = -1;
	ans[1] = -1;

	searchRange(nums,6,ans);

	cout<<'['<<ans[0]<<","<<ans[1]<<']'<<endl;


	return 0;
}