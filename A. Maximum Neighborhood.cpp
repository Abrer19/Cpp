#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;

vector<vector<ll>>v(n,vector<ll>(n));
ll k=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        v[i][j]=k+1;
        k++;
    }
}
ll ans=-1e9;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        ll sum=v[i][j];
        if(i>0) sum+=v[i-1][j];
        if(i<n-1) sum+=v[i+1][j];
        if(j>0) sum+=v[i][j-1];
        if(j<n-1) sum+=v[i][j+1];
        ans=max(ans,sum);
    }

}

cout<<ans<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();

}





}
