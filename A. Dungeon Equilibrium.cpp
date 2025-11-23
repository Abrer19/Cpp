#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
vector<ll>v(n);
map<ll,ll>mp;
for(int i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]++;
}
ll ans=0;
for(auto x:mp){
    ll val=x.first;
    ll freq=x.second;
    if(val==0){
        ans+=freq;
        continue;
    }
if(val==0){
        ans+=freq;
        continue;
    }

    if(freq<val){
        ans+=freq;
    }
    else{
        ans+=(freq-val);
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
