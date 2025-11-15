#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
vector<vector<pair<int,int>>>adj(n);
for(int i=0;i<m;i++){
    int u,v,w;
    cin>>u>>v>>w;
    adj[u].push_back({v,w});
}
int s;
cin>>s;
int des;
cin>>des;
vector<int>parent(n,-1);
vector<int>path;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
vector<int>dist(n,1e9);
dist[s]=0;
pq.push({0,s});

while(!pq.empty()){
    int wt=pq.top().first;
    int node=pq.top().second;
    pq.pop();


    for(auto it:adj[node]){
        int adjNode=it.first;
        int edgeWeight=it.second;
        if(wt+edgeWeight<dist[adjNode]){
            dist[adjNode]=wt+edgeWeight;
            pq.push({dist[adjNode],adjNode});
            parent[adjNode]=node;
        }
    }
}

int node=des;
while(parent[node]!=-1){
    path.push_back(node);
    node=parent[node];
}
path.push_back(s);
reverse(path.begin(),path.end());

for(int i=0;i<path.size();i++){
    cout<<path[i]<<" ";
}
cout<<endl;

for(int i=0;i<n;i++){
    cout<<dist[i]<<" ";
}
cout<<endl;

}
