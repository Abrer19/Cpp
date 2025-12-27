#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
int n,a,b;
cin>>n>>a>>b;
bool start=true;
int x=a;
int ans=a;
while(start || x!=a){
    start=false;
    x=(x+b)%n;
    ans=max(ans,x);
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
