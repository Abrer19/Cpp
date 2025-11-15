#include<bits/stdc++.h>
using namespace std;
const int inf=1e9;
int main(){
int n,m;
cin>>n>>m;
vector<vector<int>>dist(n,vector<int>(n,0));
for(int i=0;i<m;i++){
    int u,v,w;
    cin>>u>>v>>w;
    dist[u][v]=1;
}
for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            dist[i][j]+=dist[i][k]*dist[k][j];
        }
    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==j) continue;
        cout<<i+1<<"  TO "<<j+1<<" HAS "<<dist[i][j]<<" paths "<<endl;
    }
}

}
