#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){

ll n,k,x;
cin>>n>>k>>x;

vector<ll>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}

sort(v.rbegin(),v.rend());
ll ans=-1e18;
vector<ll>prefix(n+1,0);
for (int i=0;i<n;i++) {
    prefix[i+1]=prefix[i]+v[i];
}

for(int r=0;r<=k;r++){
    if(r>n) break;
    ll total=prefix[n]-prefix[r];
    ll idx=min(x,n-r);
    ll sum=prefix[idx+r]-prefix[r];
    ans=max(ans,total-2*sum);
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
