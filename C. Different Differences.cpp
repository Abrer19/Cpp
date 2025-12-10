#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n,k;
cin>>n>>k;

ll curr=1,diff=1;

for(int i=1;i<=n;i++){
    cout<<curr<<" ";
    if(k-(curr+diff)>=(n-i-1)){
    curr+=diff;
    diff++;
    }
    else curr++;
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
