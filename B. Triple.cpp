#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
ll a[n];
ll ans=-1;
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);

for(int i=1;i<n;i++){
    if(a[i-1]==a[i] && a[i]==a[i+1]){
        ans=a[i];
        break;
    }
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
