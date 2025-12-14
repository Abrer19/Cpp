#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
ll ans=(1<<30)-1;
for(int i=0;i<n;i++) {
    int a;
    cin>>a;
    if(a!=i){
        ans=ans&a;
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
