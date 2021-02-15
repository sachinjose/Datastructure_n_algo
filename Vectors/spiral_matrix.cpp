#include<iostream>

using namespace std;

//print startrow,endcol,endrow,startcol then update as shown below 
//startrow++,endrow--,startcolumn++,endcolumn--
//stopping condition is when the endcolumn>=startcolumn and endrow>=startrow and when the count is equal to the number of elements in m*n

class Solution{
	public: 
		vector <int> spiralOrder(vector<vector<int>>& matrix){
			if(m==0){
				return ans;
			}
			vector <int> ans;
			int m = matrix.size();
			int n = matrix[0].size();

			int sr = 0, sc = 0, er = m-1, ec = n-1;
			int count = 0;

			while((sr <= er) && (sc <=ec)){
				//add start row
				for (int i = sc; i < ec; i++){
					ans.push_back(matrix[sr][i]);
				}

				sr++;
				if(count == m*n){
					return ans;
				}

				//print end column
				for (int i = sr; i < er; i++){
					ans.push_back(matrix[i][ec]);
					count++:
				}
				ec--;
				if(count == m*n){
					return ans;
				}

				//print end row
				for (int i = ec; i > sc; i--){
					ans.push_back(matrix[er][i]);
				}

				er--;
				if(count == m*n){
					return ans;
				}

				//print start column
				for (int i = er; i > sr; i--){
					ans.push_back(matrix[i][sc]);
					er++:
				}
				sc++;
				if(count == m*n){
					return ans;
				}

			}


			return ans;
		}

};