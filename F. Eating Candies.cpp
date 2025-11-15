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
int i=0,j=n-1;
ll ans=0;
ll sum1=0,sum2=0;
while(i<j){
    sum1+=v[i];
    sum2+=v[j];
    i++;
    j--;
 if(sum1==sum2){
    ans=max(ans,(i+(n-j-1)));
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
