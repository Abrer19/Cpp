#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
string s[n];
string ans;
for(int i=0;i<n;i++){
    cin>>s[i];
}
for(int i=0;i<n;i++){
    ans=min(ans+s[i],s[i]+ans);
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
