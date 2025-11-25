#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n;
cin>>n;
vector<ll>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}

vector<ll>suffix(n);
ll sum=0;
map<ll,ll>index;
for(int i=n-1;i>=0;i--){
    sum+=v[i];
    index[sum]=i;
    suffix[i]=sum;
}
ll ans=0;
ll prefix_sum=0;
for(int i=0;i<n-1;i++){
    index.erase(suffix[i]);
    prefix_sum+=v[i];
    if(index.find(prefix_sum)!=index.end()){
        ans=max(ans,(i+1)+(n-index[prefix_sum]));
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
