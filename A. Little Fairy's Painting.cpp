#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll arr[n];
set<ll>s;
for(int i=0;i<n;i++) cin>>arr[i];
sort(arr,arr+n);
for(int i=0;i<n;i++){
    s.insert(arr[i]);
}
ll k=s.size();
ll diff=1e18;
for(int i=0;i<n;i++){
    if(arr[i]>=k){
        diff=min(diff,arr[i]-k);
    }
}

cout<<k+diff<<endl;
}


}
