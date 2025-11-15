#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool fun(ll val,ll ind,ll x,ll mid){
  if(val+1LL*(ind+1)*(mid-1)<=x){
    return true;
  }
  return false;
}
int binarySearch(ll val,ll ind,ll x){

int low=1,high=1e9;
int ans=0;

while(low<=high){
  int mid=(low+high)/2;

  if(fun(val,ind,x,mid)){
     ans=mid;
     low=mid+1;
  }
  else {
     high=mid-1;
  }
}
return ans;
}
void solve(){
ll n,x;
cin>>n>>x;

vector<ll>cost(n);

for(int i=0;i<n;i++){
    cin>>cost[i];
}

sort(cost.begin(),cost.end());

vector<ll>presum(n);

presum[0]=cost[0];

for(int i=1;i<n;i++){
    presum[i]=cost[i]+presum[i-1];
}
ll sum=0;
for(int i=0;i<n;i++){
    sum+=binarySearch(presum[i],i,x);
}
cout<<sum<<endl;
}
int main(){

ll t;
cin>>t;
while(t--){
    solve();
}

}
