#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
vector<ll>v(n);
for(int i=0;i<n;i++) cin>>v[i];
ll mx=-1e18,smx=-1e18;

for(int i=0;i<n;i++){
    mx=max(mx,v[i]);
}



for(int i=0;i<n;i++){
    if(v[i]<mx){
        smx=max(smx,v[i]);
    }
}


if(smx==-1e18){
    for(int i = 0; i < n; i++) cout << 0 << " ";
    cout << "\n";
    return;
}

for(int i=0;i<n;i++){
if(v[i]==mx){
    v[i]=mx-smx;
}
else {
    v[i]=v[i]-mx;
}
}


for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
cout<<endl;


}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}




}
