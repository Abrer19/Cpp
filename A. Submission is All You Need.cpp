
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
ll arr[n];
ll ones=0,zero=0;
ll sum=0;
for(int i=0;i<n;i++){
   cin>>arr[i];
}
for(int i=0;i<n;i++){
    if(arr[i]==0) zero++;
    else if(arr[i]==1) ones++;
    sum+=arr[i];
}
sum+=min(zero,ones)*2-min(zero,ones);
if(zero>ones) sum+=(zero-ones);
cout<<sum<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}

}
