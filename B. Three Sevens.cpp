#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
int n;
cin>>n;
map<int,int>mp;
for(int i=0;i<n;i++){
int m;
cin>>m;
for(int j=0;j<m;j++){
int x;
cin>>x;
mp[x]=i;
}
}
vector<int>ans(n+1,-1);
for(auto [v,last]:mp){
    if(ans[last]==-1){
      ans[last]=v;
}
}
for(int i=0;i<n;i++){
    if(ans[i]==-1){
        cout<<-1<<endl;
        return;
    }
}

for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
}
cout<<endl;


}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}

}
