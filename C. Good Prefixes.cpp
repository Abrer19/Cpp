#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
ll a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
vector<ll>prefixmax(n,0);
prefixmax[0]=a[0];
for(int i=1;i<n;i++){
    prefixmax[i]=max(prefixmax[i-1],a[i]);
}

vector<ll>prefixsum(n,0);
prefixsum[0]=a[0];

for(int i=1;i<n;i++){
    prefixsum[i]=prefixsum[i-1]+a[i];
}

ll cnt=0;
for(int i=0;i<n;i++){
    if(prefixsum[i]==2*prefixmax[i]){
        cnt++;
    }
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
