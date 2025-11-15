#include <bits/stdc++.h>
using namespace std;
const int INF=9999;

void floydwarshall(int v,vector<vector<int>>&dist){
    for(int k=0;k<v;k++){
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if(dist[i][k]!=INF && dist[k][j]!=INF){
                dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
                }
            }
        }
    }
}

int main() {
    int v;
    cout<<"Enter  number of vertices:";
    cin>>v;
    vector<vector<int>>dist(v,vector<int>(v));
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
        cin>>dist[i][j];
        }
    }
    floydwarshall(v,dist);

    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(dist[i][j]==INF){
                cout<<"inf ";
            }else{
                cout<<dist[i][j]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}



