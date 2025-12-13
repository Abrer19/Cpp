#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll a,b,c,n;
cin>>a>>b>>c>>n;
string s;
cin>>s;
ll ans=0;
for(int i=0;i<n;i++){
    if(s[i]=='1'){
        ans++;
        a-=c;
    }
    else {
        if(a<b){
            ans++;
            a-=c;
        }
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
