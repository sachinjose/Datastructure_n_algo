#include"/Users/sachinjose/Desktop/DSnA/stdc++.h"

using namespace std;


void print(vector<vector<int> > v, int sv){
  
  vector<bool> visited(n,false);
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


   
   print(matrix,0);

   cout<<endl;
   return 0;
}
