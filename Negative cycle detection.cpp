
#include<bits/stdc++.h>
using namespace std;
const int INF=1e9;
int main(){
int n,m;
cin>>n>>m;
vector<vector<vector<int>>>D(n+1,vector<vector<int>>(n,vector<int>(n,INF)));
for(int i=0;i<n;i++)D[0][i][i]=0;
for(int i=0;i<m;i++){
int u,v,w;
cin>>u>>v>>w;
D[0][u][v]=w;
}
cout<<"D(0) Matrix:\n";
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(D[0][i][j]==INF)cout<<-1<<" ";
else cout<<D[0][i][j]<<" ";
}
cout<<"\n";
}
cout<<"\n";
for(int k=1;k<=n;k++){
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
int without_k=D[k-1][i][j];
int with_k;
if(D[k-1][i][k-1]<INF&&D[k-1][k-1][j]<INF)with_k=D[k-1][i][k-1]+D[k-1][k-1][j];
else with_k=INF;
if(with_k<without_k)D[k][i][j]=with_k;
else D[k][i][j]=without_k;
}
}
cout<<"D("<<k<<") Matrix:\n";
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(D[k][i][j]==INF)cout<<-1<<" ";
else cout<<D[k][i][j]<<" ";
}
cout<<"\n";
}
cout<<"\n";
}
bool negCycle=false;
for(int i=0;i<n;i++){
if(D[n][i][i]<0){
negCycle=true;
break;
}
}
if(negCycle)cout<<"Negative cycle detected\n";
else cout<<"No negative cycle\n";
return 0;
}
