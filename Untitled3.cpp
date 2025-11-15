#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
if(a[0]==1){
    cout<<"YES"<<endl;
    return;
}
else cout<<"NO"<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}

}
