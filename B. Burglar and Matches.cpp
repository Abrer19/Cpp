#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n,m;
cin>>n>>m;
vector<pair<ll,ll>>v(m);
for(int i=0;i<m;i++){
    ll a,b;
    cin>>a>>b;
    v.push_back({b,a});
}
sort(v.rbegin(),v.rend());
ll ans=0;
for(int i=0;i<m;i++){
    if(v[i].second<=n){
        n-=v[i].second;
        ans+=(v[i].second*v[i].first);

    }
    else{
        ans+=(n*v[i].first);
        n-=n;
    }
    if(n==0){
        break;
    }
}

cout<<ans<<endl;
}
int main(){


    solve();



}
