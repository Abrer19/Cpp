#include<bits/stdc++.h>
using namespace std;
const int inf=1e9;
int main(){
int n,m;
cin>>n>>m;
vector<vector<int>>dist(n,vector<int>(n,inf));
for(int i=0;i<m;i++){
    int u,v,w;
    cin>>u>>v>>w;
    dist[u][v]=w;
}

for(int i=0;i<n;i++) {
    dist[i][i] = 0;
}

for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(dist[i][k]<inf && dist[k][j]<inf){
               dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }
}


for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<dist[i][j]<<" ";
    }
    cout<<endl;
}
}
