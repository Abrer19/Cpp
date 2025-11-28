#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n,k;
cin>>n>>k;
vector<ll>v(n*k);
for(int i=0;i<n*k;i++){
    cin>>v[i];
}

ll pointer=n*k;
ll sum=0;
while(k--){
    pointer-=(n/2)+1;
    sum+=v[pointer];
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
