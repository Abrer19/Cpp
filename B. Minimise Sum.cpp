#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
vector<ll>v(n);
for(int i=0;i<n;i++) cin>>v[i];

cout<<v[0]+min(v[0],v[1])<<endl;

}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}

}
