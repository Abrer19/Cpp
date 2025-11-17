#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fun(ll x){
return pow(3,x+1)+x*pow(3,x-1);
}
void solve(){
ll n;
cin>>n;
ll p=0,ans=0;
while(n>0){
p=log(n)/log(3);

if(pow(3,p+1)==n){
    p=p+1;
}
ans+=fun(p);
n=n-pow(3,p);
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
