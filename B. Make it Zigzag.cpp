#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
vector<ll>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
ll ma=a[0];
ll ans=0;
for(int i=1;i<n;i++){
    if(i%2==1){
        a[i]=max(ma,a[i]);
    }
    ma=max(ma,a[i]);
}

for(int i=0;i<n;i=i+2){
    ll mi=1e9;
    if(i-1>0){
        mi=min(mi,a[i-1]);
    }
    if(i+1<n){
        mi=min(mi,a[i+1]);
    }
    if(mi<=a[i]){
        ans+=a[i]-mi+1;
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
