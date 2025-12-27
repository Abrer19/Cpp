#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n,c;
cin>>n>>c;
vector<ll>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
int i;
for(i=n-1;i>=0;i--){
    if(v[i]<=c){
        break;
    }
}
ll ans=(n-i-1);
ll cnt=1;
while(i>=0){
    if(v[i]*cnt>c){
        ans++;
    }
    else {
        cnt=cnt*2;

    }
    i--;
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

