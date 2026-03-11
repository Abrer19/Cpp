#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n,x,y;
cin>>n>>x>>y;
ll maxi=max(x,y);
ll mini=min(x,y);
ll arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
ll cntmaxi=0,cntmini=0;

for(int i=0;i<n;i++){
    if(arr[i]<=maxi) cntmaxi++;
    if(arr[i]<=mini) cntmini++;
}

cout<<min(cntmini,(cntmaxi/2))<<endl;

}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}

}
