#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
vector<ll>v(n);
for(int i=0;i<n;i++) cin>>v[i];
if(n==1){
    cout<<1<<endl;
    return;
}
ll cnt=0,sum=v[0];
for(int i=0;i<n;i++){
   sum=sum&v[i];
   if(sum==0){
      cnt++;

   if(i+1<n){
     sum=v[i+1];
   }
   else sum=0;
}
}

if(cnt==0){
    cnt=1;
}


cout<<cnt<<endl;

}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}

}
