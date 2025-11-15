#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n,a;
cin>>n>>a;
vector<ll>v(n);
for(int i=0;i<n;i++) cin>>v[i];
sort(v.begin(),v.end());
ll cnt1=0,cnt2=0;
for(int i=0;i<n;i++){
    if(v[i]<a) cnt1++;
    else if(v[i]>a) cnt2++;
}
if(cnt2>=cnt1) cout<<a+1<<endl;
else cout<<a-1<<endl;
}
int main(){
ll t;
cin>>t;
while(t--) solve();
}
