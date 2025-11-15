#include<bits/stdc++.h>
using namespace std;
const int inf=1e9;
int main(){

int n,e;
cout<<"Enter your node and edges number: "<<endl;
cin>>n>>e;
vector<vector<pair<int,int>>>graph(n);
cout<<"enter your edges"<<endl;
for(int i=0;i<e;i++){
    int u,v,w;
    cin>>u>>v>>w;
    graph[u].push_back({v,w});
}
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
vector<int>dis(n,inf);
int source;
cin>>source;
pq.push({0,source});
dis[source]=0;
while(!pq.empty()){
    int weight=pq.top().first;
    int node=pq.top().second;
    pq.pop();
    for(auto it: graph[node]){
        int vertex=it.first;
        int Eweight=it.second;
if(weight+Eweight<dis[vertex])
    dis[vertex]=weight+Eweight;
    pq.push({dis[vertex],vertex});
    }

}
for(int it:dis){
    cout<<it<<" ";
}
cout<<endl;
}
