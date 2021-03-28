#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;


void helper(vector<vector<int> > v,int sv,vector<bool> &visited){

  cout<<sv<<" ";
  visited[sv] = true;
  queue<int> q;
  q.push(sv);
  int n = v.size();

  while(!q.empty()){
    int currele = q.front();
    q.pop();
    for (int i = 0; i < n; i++){
        if(v[currele][i]==1 && visited[i] == false){
            visited[i] = true;
            cout<<i<<" ";
            q.push(i);
        }
    }
  }

}

void print(vector<vector<int> > v){
  int n = v.size();
  vector<bool> visited(n,false);
  for (int i = 0; i < n; i++){
    if(!visited[i]){
        helper(v,i,visited);
    }
  }
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


   
   print(matrix);

   cout<<endl;
   return 0;
}
