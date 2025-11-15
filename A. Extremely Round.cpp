#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(ll x){
  ll cnt=0;
  while(x>=1){
     if(x%10!=0) cnt++;
     x=x/10;
  }

  if(cnt==1) return true;
  else return false;
}
int main(){
vector<ll>v;
for(ll i=1;i<=999999;i++){
    if(check(i)){
       v.push_back(i);
    }
}

ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll ans=0;
for(int i=0;i<v.size();i++){
    if(v[i]<=n){
        ans++;
    }
}
cout<<ans<<endl;
}


}

