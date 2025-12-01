#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n,h,m;
cin>>n>>h>>m;
ll t1=h*60+m;
ll ans=24*60;
for(int i=0;i<n;i++){
    ll h,m;
    cin>>h>>m;
    ll t2=h*60+m-(t1);
    if(t2<0) t2+=24*60;
    ans=min(ans,t2);
}
cout<<ans/60<<" "<<ans%60<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}

}
