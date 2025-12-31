#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
ll arr[n];
map<ll,ll>freq;
ll maxf=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    freq[arr[i]]++;
    maxf=max(maxf,freq[arr[i]]);
}
ll ans=0,cnt=0;
while(maxf>0){
    for(auto x:freq){
        if(maxf==x.second){
            cnt++;
        }
        ans=max(ans,(maxf)*cnt);
    }
    maxf--;
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
