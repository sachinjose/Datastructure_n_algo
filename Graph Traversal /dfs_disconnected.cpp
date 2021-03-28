#include<iostream>
#include<vector>
using namespace std;

void helper(vector<vector<int> > v, int sv, vector<bool> &visited){
  cout<<sv<<endl;
  visited[sv] = true;
  int n = v.size();
  for (int i = 0; i < n; i++){
      if(v[sv][i] == 1 && visited[i] == false){
          helper(v,i,visited);
      }
  }
}

int print(vector<vector<int> > v){
  int ans = 0;
  int n = v.size();
  vector<bool> visited(n,false);
  for (int i = 0; i < n; i++){
    if(!visited[i]){
        helper(v,i,visited);
        ans++;
    }
  }
  return ans;
}

int main(){
   int n,e;
   cin>>n>>e;

   vector<vector<int> > matrix(n,vector<int>(n,0));

   for(int i=1;i<=e;i++){
    int fv,sv;
    cin>>fv>>sv;
    matrix[fv][sv] = 1;
    matrix[sv][fv] = 1;
   }
   
  cout<<print(matrix)<<endl;

   return 0;
}
