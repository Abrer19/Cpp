#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){

ll n;
cin>>n;
map<ll,ll>mp;
vector<ll>v(2*n);
for(int i=0;i<2*n;i++){
    cin>>v[i];
    mp[v[i]]++;
}

ll ans=0,odd=0,even=0;
for(auto i:mp){
    if(i.second%2==1){
        ans+=1;
        odd++;
    }
    else{
        ans+=2;
        even++;
    }
}

if(odd==0 && ((even%2)^(n%2))){
    ans-=2;
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
