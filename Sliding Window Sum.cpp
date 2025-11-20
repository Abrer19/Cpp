#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n,k;
cin>>n>>k;
ll x,a,b,c;
cin>>x>>a>>b>>c;
vector<ll>arr(n);
arr[0]=x;
for(int i=1;i<n;i++){
    arr[i]=((a*arr[i-1]+b)%c);
}
ll mini=1e9;
for(int i=0;i<k;i++){
    mini=min(arr[i],mini);
}
ll ans=mini;
for(int i=k;i<n;i++){
     sum=sum-arr[i-k]+arr[i];
     ans=ans^mini;
}

cout<<ans<<endl;
}
int main(){

    solve();

}
