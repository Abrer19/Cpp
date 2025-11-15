#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n,k;
cin>>n>>k;
ll a[n];
map<ll,ll>mp;
bool f=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]++;
}
//sort(a,a+n);
for(int i=0;i<n;i++){
    if(mp[a[i]+k]){
        f=1;
        break;
    }
}

if(f==1) cout<<"YES"<<endl;
else cout<<"NO"<<endl;

}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}

}
