#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n,m,x,y,d;
cin>>n>>m>>x>>y>>d;
if(x-d>1 && y+d<m){
    cout<<n+m-2<<endl;
}
else if(x+d<n && y-d>1){
     cout<<n+m-2<<endl;
}
else cout<<-1<<endl;



}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}



}
