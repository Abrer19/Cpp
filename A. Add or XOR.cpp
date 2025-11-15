#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll a,b,x,y;
cin>>a>>b>>x>>y;
if(b<a-1 || (a%2==0 && b<a)){
    cout<<-1<<endl;
    return;
}
if(b==a-1){
    cout<<y<<endl;
    return;
}
ll ans=0;
while(a!=b){
    if(a%2==0) ans+=min(x,y);
    else ans+=x;
    a++;
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
