#include<bits/stdc++.h>
using namespace std;
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
int s;
cin>>s;
queue<int>q;
visited[s]=1;
q.push(s);
vector<int>bfs;
while(!q.empty()){
    int node=q.front();
    bfs.push_back(node);
    q.pop();
    for(int it:adj[node]){
        if(!visited[it]){
            visited[it]=1;
            q.push(it);
        }
    }
}

for(int i=0;i<bfs.size();i++){
    cout<<bfs[i]<<" ";
}
cout<<endl;
}
