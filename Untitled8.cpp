
#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>>&adj,vector<int>&visited,int node,vector<int>&ans){
visited[node]=1;
ans.push_back(node);
for(auto it:adj[node])
if(!visited[it]){
    dfs(adj,visited,it,ans);
}
}
int main(){
int n,m;
cin>>n>>m;
vector<vector<int>>adj(n);
for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
}
vector<int>visited(n,0);
vector<int>ans;
int s;
cin>>s;
//visited[s]=1;
dfs(adj,visited,s,ans);


for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
cout<<endl;
}
