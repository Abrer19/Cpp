#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
ll arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
sort(arr,arr+n);

ll ans=1,support=0;

for(int i=n-1;i>=0;i--){
    if(!arr[i]) break;
    support+=arr[i]-1;
    support=min(support,n-1);
    ll current1=n-i;
    ll operationmust=n-support;
    ll maxlen=current1-(operationmust-1);
    ans=max(ans,maxlen);
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
