#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll a,b,k;
cin>>a>>b>>k;
if(k>=max(a,b)/__gcd(a, b)){
   cout<<1<<endl;
}
else cout<<2<<endl;


}
int main(){
ll t;
cin>>t;
while(t--){
    solve();
}

}
